def sort_even(l: list):
    even_nums = [x for x in l if x % 2 == 0]
    return [
        x if i % 2 != 0 else (sorted(even_nums)[::-1][j])
        for i, x in enumerate(l)
        for j, _ in enumerate(even_nums)
    ]