def cut_vector(vector):
    n = len(vector)
    if n == 1:
        return vector, [0]
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    idx = -1
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            idx = i
            if diff == 0:
                break
    return vector[: idx + 1], vector[idx + 1 :]


# Reading input
vector = list(map(int, input().split()))

# Calling the cut_vector function and printing the output
output1, output2 = cut_vector(vector)
print(output1)
print(output2)