def sort_even(l: list):
    even_nums = {i: x for i, x in enumerate(l) if i % 2 == 0}
    return [
        (
            x
            if i % 2 != 0
            else min(even_nums.keys(), key=lambda k: even_nums[k])
        )
        for i, x in enumerate(l)
    ]