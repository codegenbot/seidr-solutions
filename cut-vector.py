numbers = list(map(int, input().split(",")))
subvector1 = []
subvector2 = []
min_diff = float("inf")

if len(numbers) > 1:
    for cut_index in range(len(numbers)):
        sum1 = sum(numbers[:cut_index])
        sum2 = sum(numbers[cut_index:])
        diff = abs(sum1 - sum2)
        if diff < min_diff:
            min_diff = diff
            subvector1 = numbers[:cut_index]
            subvector2 = numbers[cut_index:]

print(",".join(map(str, subvector1)))
print(",".join(map(str, subvector2)))



