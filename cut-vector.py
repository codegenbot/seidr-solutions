numbers = list(map(int, input().split()))
if len(numbers) <= 1:
    print(numbers, [])
elif len(numbers) == 2:
    print(numbers, [])
else:
    min_diff = float('inf')
    cut_index = 0
    for i in range(1, len(numbers)):
        diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    print(numbers[:cut_index], numbers[cut_index:])