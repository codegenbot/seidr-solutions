def sort_third(l: list):
    return [
        (
            [x for x in l[i - 1 :: 3] if i % 3 != 0][::-1]
            if i % 3 != 0
            else sorted([x for x in l[: i * 3] if x % 3 != 0], reverse=True)
        )
        for i in range(1, len(l) // 3 + 1)
    ]