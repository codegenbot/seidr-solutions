n = int(input())
arr = [int(input()) for _ in range(n)]


def cut_vector(arr):
    prefix_sum = [0] + arr[:]
    for i in range(1, n + 1):
        prefix_sum[i] += prefix_sum[i - 1]

    total_sum = prefix_sum[-1]
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, n):
        diff = abs(total_sum - 2 * prefix_sum[i])
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]

    return subvector1, subvector2


output1, output2 = cut_vector(arr)
for num in output1:
    print(num)
for num in output2:
    print(num)