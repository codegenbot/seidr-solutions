def cut_vector(arr):
    total_sum = sum(arr)
    left_sum = 0
    min_diff = float("inf")
    cut_index = 0

    for i in range(len(arr)):
        left_sum += arr[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return arr[: cut_index + 1], arr[cut_index + 1 :]


# Reading input from the user
arr = list(map(int, input().split()))
result1, result2 = cut_vector(arr)
print(*result1)
print(*result2)