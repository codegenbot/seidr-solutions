n = int(input())
vector = [int(input()) for _ in range(n)]
total_sum = sum(vector)
min_diff = total_sum
result = []
for i in range(1, n):
    part1_sum = sum(vector[:i])
    part2_sum = total_sum - part1_sum
    if abs(part1_sum - part2_sum) < min_diff:
        min_diff = abs(part1_sum - part2_sum)
        result = [vector[:i], vector[i:]]
print(*result[0], sep="\n")
print(*result[1], sep="\n")