```
def find_largest_sum_of_subarray(arr):
    max_ending_here = max_so_far = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max_ending_here + arr[i]:
            max_ending_here = arr[i]
            max_so_far = max_ending_here
        else:
            max_ending_here += arr[i]
        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
    return max_so_far

print(find_largest_sum_of_subarray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))