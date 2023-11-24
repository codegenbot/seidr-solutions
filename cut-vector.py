def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    cut_index = -1

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index == n - 1:
        return [], []
    else:
        return vector[:cut_index+1], vector[cut_index+1:]

def main():
    n = int(input())
    vector = []
    for _ in range(n):
        vector.append(int(input()))

    result1, result2 = cut_vector(vector)
    print(result1)
    print(result2)

main()