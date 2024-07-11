def sort_even(lst):
    index_map = {x: i for i, x in enumerate(lst)}
    return [
        (
            x
            if i % 2 != 0
            else min([y for y in lst if (i - 1) // 2 == index_map[y]//2], default=None)
        )
        for i, x in enumerate(lst)
    ]