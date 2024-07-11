numbers = list(map(int, input().split()))
min_diff = float('inf')
cut_index = 0
for i in range(len(numbers)):
    diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

if cut_index == 0:
    print([], numbers)
elif cut_index == len(numbers):
    print(numbers, [])
else:
    print(numbers[:cut_index], numbers[cut_index:])