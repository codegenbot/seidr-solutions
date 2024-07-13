n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
index = 0

for i, num in enumerate(v):
    current_sum += num
    if current_sum >= half_sum:
        index = i
        break

subvector1 = v[: index + 1]
subvector2 = v[index + 1 :]

print(*subvector1)
print(*subvector2)