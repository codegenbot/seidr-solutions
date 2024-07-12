def cut_vector(arr):
    total_sum = sum(arr)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(arr)):
        left_sum += arr[i]
        right_sum -= arr[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return arr[: cut_index + 1], arr[cut_index + 1 :]


# Read input
arr = list(map(int, input().split()))

# Get output
left_subvector, right_subvector = cut_vector(arr)
print(*left_subvector)
print(*right_subvector)