def double_the_difference(lst, target_diff):
    even_nums = [i for i in lst if isinstance(i, int) and i % 2 == 0]
    pairs = [(a, b) for a in even_nums for b in even_nums if abs(a - b) == target_diff]
    return sum([i**2 for pair in pairs for i in pair])