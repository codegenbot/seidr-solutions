def max_sum_of_subarrays(arr):
    n = len(arr)
    prefix_sum = [0] * (n + 1)
    suffix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i+1] = prefix_sum[i] + arr[i]
    for i in range(n-1, -1, -1):
        suffix_sum[i] = suffix_sum[i+1] + arr[i]
    max_sum = float('-inf')
    for i in range(n):
        for j in range(i+1, n):
            max_sum = max(max_sum, sum(arr[i:j+1]))
    return max_sum