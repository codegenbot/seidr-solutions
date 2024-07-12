def sort_third(l: list):
    return [
        val if i % 3 != 0 else min(list(filter(lambda x: x > val, l[i // 3 :: 3])))
        for i, val in enumerate(l)
    ]