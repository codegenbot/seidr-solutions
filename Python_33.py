def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted([x for x in l if x % 3 == 0])[-1]
                if any(i % 3 == 0 for i in l)
                else min(l, key=lambda x: (x % 3, -x))
            )
        )
        for i in l
    ]