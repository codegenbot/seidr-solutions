```
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
min_diff = float('inf')
closest_pair = ()
for i in set(tuple(sorted((x, y))) for x in numbers for y in numbers if x != y):
    diff = abs(i[0] - i[1])
    if diff < min_diff:
        min_diff = diff
        closest_pair = i
print(closest_pair)