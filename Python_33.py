def sort_third(l: list):
    return [
        (
            i if isinstance(i, int) else 0
            if isinstance(i, int) and i % 3 != 0
            else (
                sorted([x for x in l if isinstance(x, int) and x % 3 == 0])[-1]
                if any(isinstance(x, int) and x % 3 == 0 for x in l)
                else 0
            )
        )
        for i in l
    ]