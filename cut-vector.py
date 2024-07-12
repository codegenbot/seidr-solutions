def cut_vector(arr):
    total_sum = sum(arr)
    half_sum = total_sum // 2
    curr_sum = 0
    idx = 0
    for i, num in enumerate(arr):
        curr_sum += num
        if curr_sum >= half_sum:
            idx = i
            break
    if abs(total_sum - 2 * curr_sum) < abs(total_sum - 2 * (curr_sum - arr[idx])):
        return arr[: idx + 1], arr[idx + 1 :]
    else:
        return arr[:idx], arr[idx:]


# Read input vector
arr = list(map(int, input().strip().split()))

# Call the function and print the output
subvector1, subvector2 = cut_vector(arr)
print(*subvector1)
print(*subvector2)