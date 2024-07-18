n = int(input())
numbers = [int(input()) for _ in range(n)]

left_sum = 0
right_sum = sum(numbers)
min_diff = float("inf")
cut_index = 0

for i in range(n):
    left_sum += numbers[i]
    right_sum -= numbers[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = numbers[: cut_index + 1]
subvector2 = numbers[cut_index + 1 :]

print(*subvector1)
print(*subvector2)