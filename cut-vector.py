n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
left_sum = 0
right_sum = total_sum

for i in range(n):
    left_sum += numbers[i]
    right_sum -= numbers[i]
    if left_sum >= right_sum:
        break

subvector1 = numbers[: i + 1]
subvector2 = numbers[i + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")