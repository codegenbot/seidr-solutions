n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
half_sum = total_sum // 2
current_sum = 0
index = 0
for i, num in enumerate(vector):
    current_sum += num
    if current_sum >= half_sum:
        index = i
        break

subvector1 = vector[: index + 1]
subvector2 = vector[index + 1 :]

print(*subvector1)
print(*subvector2)