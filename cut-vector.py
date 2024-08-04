def cut_vector(arr):
    total_sum = sum(arr)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = 0

    for i in range(len(arr)):
        left_sum += arr[i]
        right_sum -= arr[i]
        current_diff = abs(left_sum - right_sum)

        if current_diff < min_diff:
            min_diff = current_diff
            cut_index = i

    return arr[: cut_index + 1], arr[cut_index + 1 :]


# Read input from user
arr = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(arr)
print(subvector1)
print(subvector2)