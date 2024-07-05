def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in range((i // 3 * 3) + 1), key=lambda x: x if x % 3 != 0 else float('inf')])[-1]
        )
        for i in range(len(l))
    ]