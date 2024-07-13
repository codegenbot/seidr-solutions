n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
running_sum = 0
for i in range(n):
    running_sum += v[i]
    if running_sum >= total_sum - running_sum:
        break
print(*v[: i + 1])
print(*v[i + 1 :])