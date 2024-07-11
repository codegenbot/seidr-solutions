numbers = list(map(int, input().split()))
min_diff = float("inf")
cut_index = 0

for i in range(1, len(numbers)):
    diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

if (
    sum(numbers[:cut_index]) == sum(numbers[cut_index:])
    or abs(sum(numbers[:cut_index]) - sum(numbers[cut_index:])) == min_diff
):
    print(numbers[:cut_index], numbers[cut_index:])
else:
    print(numbers[:-1], [numbers[-1]])