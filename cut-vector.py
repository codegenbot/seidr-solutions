n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

total_sum = sum(numbers)
half_sum = total_sum // 2
left_sum = 0
cut_index = 0

for i in range(n):
    left_sum += numbers[i]
    if left_sum >= half_sum:
        cut_index = i
        break

left_subvector = numbers[: cut_index + 1]
right_subvector = numbers[cut_index + 1 :]

print(*left_subvector)
print(*right_subvector)