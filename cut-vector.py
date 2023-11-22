vector = list(map(int, input().split()))

subvector1 = []
subvector2 = []
min_diff = float("inf")

for i in range(len(vector) - 1):
    sum1 = sum(vector[: i + 1])
    sum2 = sum(vector[i + 1 :])
    diff = abs(sum1 - sum2)

    if diff == 0 or diff < min_diff:
        min_diff = diff
        subvector1 = vector[: i + 1]
        subvector2 = vector[i + 1 :]

for num in subvector1:
    print(num)

print()

for num in subvector2:
    print(num)