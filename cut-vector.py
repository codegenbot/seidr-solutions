def cut_vector(arr):
    prefix_sum = [0]
    for num in arr:
        prefix_sum.append(prefix_sum[-1] + num)

    total_sum = prefix_sum[-1]
    min_diff = total_sum
    cut_index = 0

    for i in range(1, len(arr)):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        current_diff = abs(left_sum - right_sum)

        if current_diff < min_diff:
            min_diff = current_diff
            cut_index = i

    return arr[:cut_index], arr[cut_index:]


# Read input vector
arr = list(map(int, input().split()))

# Call the function and get the two subvectors
left_subvector, right_subvector = cut_vector(arr)

# Print the two subvectors
for num in left_subvector:
    print(num)

for num in right_subvector:
    print(num)