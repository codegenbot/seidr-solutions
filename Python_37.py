def sort_even(l: list):
    even_nums = sorted([x for x in l if l.index(x) % 2 == 0])
    return [even_nums[i // 2] if i % 2 != 0 else x for i, x in enumerate(l)]