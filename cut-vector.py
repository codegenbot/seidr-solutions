numbers = list(map(int, input().split(',')))
subvector1 = []
subvector2 = []

if len(numbers) >= 1:
    min_diff = float("inf")
    for cut_index in range(1, len(numbers)+1):
        sum1 = sum(numbers[:cut_index])
        sum2 = sum(numbers[cut_index:])
        diff = abs(sum1 - sum2)
        if diff < min_diff:
            min_diff = diff
            subvector1 = numbers[:cut_index]
            subvector2 = numbers[cut_index:]

print(subvector1[0])
print(subvector2)