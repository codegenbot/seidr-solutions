n = int(input())
arr = [int(input()) for _ in range(n)]

mid_idx = (n - 1) // 2
left_sum = sum(arr[:mid_idx])
right_sum = sum(arr[mid_idx + 1 :])

if left_sum == right_sum or abs(left_sum - right_sum) <= 1:
    print(*arr[:mid_idx])
    print(*arr[mid_idx:])
else:
    print(*arr[: mid_idx + 1])
    print(*arr[mid_idx + 1 :])