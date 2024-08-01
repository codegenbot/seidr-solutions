def sort_third(l: list):
    return [
        (
            [x for x in l[i - 1 :: 3] if i % 3 != 0][::-1]
            if i % 3 != 0
            else [x for x in l[i - 1 :: 3]]
        )
        for i in range(1, len(l) + 1)
    ]