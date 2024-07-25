def sort_third(l: list):
    l = [tuple(l[i:i+3]) for i in range(0, len(l), 3]
    return [
        sorted(
            [tuple([i[j] for j in range(3)]) for i in l[i : i + 3]],
            key=lambda x: x[2] if isinstance(x, tuple) and len(x) == 3 else float("inf")
        )
        for i in range(0, len(l), 3)
    ]