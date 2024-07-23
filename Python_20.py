def find_closest_elements(numbers):
    min_diff = float('inf')
    closest_pair = ()
    for i in set(tuple(sorted((x, y))) for x in numbers for y in numbers if x != y):
        diff = abs(i[0] - i[1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = i
    print(closest_pair)
    return closest_pair

find_closest_elements([1.1, 2.2, 3.1, 4.1, 5.1])