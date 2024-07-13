def sort_even(l: list):
    even_nums = sorted([x for x in l if x % 2 == 0])
    return [x if x % 2 != 0 else even_nums.pop(0) for _ in range(len(l))]