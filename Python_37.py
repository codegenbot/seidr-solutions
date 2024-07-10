def sort_even(l: list):
    even_nums = [x for i, x in enumerate(l) if i % 2 == 0]
    odd_nums = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    return even_nums + odd_nums