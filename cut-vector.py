n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = 0
for i in range(n):
    half_sum += v[i]
    if half_sum * 2 >= total_sum:
        break
print(*v[: i + 1])
print(*v[i + 1 :])