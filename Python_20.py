numbers = list(map(int, input("Enter space-separated numbers: ").split()))
min_diff = float('inf')
for i in set(tuple(sorted((x, y))) for x in numbers for y in numbers if x != y):
    diff = abs(i[0] - i[1])
    if diff < min_diff:
        min_diff = diff
        closest_pair = i
print(closest_pair)