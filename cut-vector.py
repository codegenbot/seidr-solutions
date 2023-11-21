def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum - vector[0]

    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        left_sum += vector[i-1]
        right_sum -= vector[i-1]

        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            min_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]

n = int(input())
vector = list(map(int, input().split()))

left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector)
print(*right_subvector)