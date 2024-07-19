def sort_third(l: list) -> list:
    l += [0] * (3 - len(l) % 3)
    return [
        sorted(sublist, key=lambda x: ((x, -float('inf')) if isinstance(x, int) else (float('inf'), x)) if isinstance(x, str) else (float('inf'), float('inf'))
        for sublist in (
            l[i:i + 3] for i in range(0, len(l), 3)
        )
    ]