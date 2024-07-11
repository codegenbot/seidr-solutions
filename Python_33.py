def sort_third(l: list):
    return [
        sorted(x) if isinstance(x, list) and len(x) >= 3 else x
        for i, x in enumerate(
            [
                x
                for x in (l[i : i + 3] if i < len(l) - 2 else l[i:])
                for i in range(len(l))
            ]
        )
    ]