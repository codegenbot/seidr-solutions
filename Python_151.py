def double_the_difference(lst, target):
    evens = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    pairs = [(a, b) for a in evens for b in evens if abs(a - b) == target]
    return sum(i**2 for i, j in pairs)