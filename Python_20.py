for i in set(tuple(sorted((x, y))) for x in numbers for y in numbers if x != y):
    diff = abs(i[0] - i[1])
    if diff < min_diff:
        min_diff = diff
        closest_pair = i