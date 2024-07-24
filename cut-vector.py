n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
half_sum = total_sum // 2

subvector1 = []
subvector2 = []

for i in range(n):
    subvector1_sum = sum(subvector1)
    subvector2_sum = sum(subvector2)

    if subvector1_sum <= half_sum and subvector1_sum + numbers[i] <= half_sum:
        subvector1.append(numbers[i])
    else:
        subvector2.append(numbers[i])

print("\n".join(map(str, subvector1)))
print("\n".join(map(str, subvector2)))