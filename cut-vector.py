n = int(input())
a = [int(input()) for _ in range(n)]
total_sum = sum(a)
left_sum = 0
for i in range(n):
    left_sum += a[i]
    if left_sum * 2 >= total_sum:
        break
print(*a[: i + 1])
print(*a[i + 1 :])