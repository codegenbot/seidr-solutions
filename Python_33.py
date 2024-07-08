def sort_third(lst):
    third_max = max([x for x in lst if x % 3 == 0], default=None)
    return [
        val if i % 3 != 0 else (third_max if val > third_max else val)
        for i, val in enumerate(lst)
    ]