n = int(input())
vec = [int(input()) for _ in range(n)]
total_sum = sum(vec)
half_sum = 0
for i in range(n):
    half_sum += vec[i]
    if half_sum * 2 >= total_sum:
        break
print(*vec[: i + 1])
print(*vec[i + 1 :])