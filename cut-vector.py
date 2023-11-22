def cut_vector(arr):
    n = len(arr)

    # Calculate the absolute difference between the sum of the left and right subvectors for each potential cut position
    diff = [abs(sum(arr[:i]) - sum(arr[i:])) for i in range(1, n)]

    # Get the index of the cut position with the smallest difference
    min_diff_index = diff.index(min(diff))

    # Return the resulting subvectors
    left_subvector = arr[: min_diff_index + 1]
    right_subvector = arr[min_diff_index + 1 :]

    return left_subvector, right_subvector


# Read input vector from user
arr = [int(input()) for _ in range(int(input()))]

# Call the cut_vector function and print the resulting subvectors
left_subvector, right_subvector = cut_vector(arr)
print(*left_subvector, sep="\n")
print(*right_subvector, sep="\n")