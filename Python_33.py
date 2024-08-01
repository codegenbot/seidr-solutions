def sort_third(lst):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in lst[i // 3 * 3:i] if x % 3 != 0])[-1]
        )
        for i, val in enumerate(lst)
    ]