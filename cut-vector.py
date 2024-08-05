n = int(input())
a = [int(input()) for _ in range(n)]
if n == 1:
    print(a[0])
    print(0)
else:
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1]
    total_sum = prefix_sum[n]
    min_diff = float("inf")
    cut_position = -1
    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_position = i
    if cut_position != -1:
        print(*a[:cut_position])
        print(*a[cut_position:])
    else:
        print(a[0])
        print(0)