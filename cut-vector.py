a = list(map(int, input().split()))
total_sum = sum(a)
left_sum = 0
for i in range(len(a)):
    left_sum += a[i]
    if left_sum * 2 >= total_sum:
        break
print(*a[: i + 1])
print(*a[i + 1 :])