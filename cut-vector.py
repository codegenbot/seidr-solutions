numbers = list(map(int, input().split()))
total_sum = sum(numbers)
half_sum = 0
for i, num in enumerate(numbers):
    half_sum += num
    if half_sum * 2 >= total_sum:
        break
subvector1 = numbers[: i + 1]
subvector2 = numbers[i + 1 :]
print(*subvector1)
print(*subvector2)