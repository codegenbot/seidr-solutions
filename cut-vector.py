n = int(input())
arr = [int(input()) for _ in range(n)]
diff = sum(arr) // 2
left_sum = 0
for i in range(n):
    if left_sum + arr[i] >= diff:
        break
    left_sum += arr[i]
if abs(sum(arr[:i]) - sum(arr[i:])) <= abs(sum(arr[: i - 1]) - sum(arr[i - 1 :])):
    print(arr[:i])
    print(arr[i:])
else:
    print(arr[: i - 1])
    print(arr[i - 1 :])