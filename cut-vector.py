n = int(input())
vector = [int(input()) for _ in range(n)]
total_sum = sum(vector)
half_sum = total_sum / 2
current_sum = 0
index = 0

for i, num in enumerate(vector):
    current_sum += num
    if current_sum >= half_sum:
        index = i
        break

left_subvector = vector[: index + 1]
right_subvector = vector[index + 1 :]

print(*left_subvector)
print(*right_subvector)