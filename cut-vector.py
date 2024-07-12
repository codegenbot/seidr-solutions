n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
half_sum = total_sum // 2
closest_sum = 0

for i in range(n):
    if closest_sum + numbers[i] <= half_sum:
        closest_sum += numbers[i]
    else:
        break

subvector1 = numbers[: i + 1]
subvector2 = numbers[i + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")