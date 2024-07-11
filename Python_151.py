def double_the_difference(lst, target_diff):
    evens = [i for i in lst if isinstance(i, int) and i % 2 == 0]
    pairs = [(a, b) for a in evens for b in evens if abs(a - b) == target_diff]
    return sum([pair[0] ** 2 + pair[1] ** 2 for pair in pairs])