def sort_even(l: list):
    even_nums = sorted([x for x in l if x % 2 == 0])
    return [x if i < len(even_nums) else even_nums[-1] for i, x in enumerate(l)]