def sort_third(l: list):
    return [
        (
            sorted([x for x in l[i : i + 3]])[0]
            if i % 3 == 0
            else (l[i] if i % 3 != 0 else sorted([x for x in l[i : i + 3]])[0])
        )
        for i in range(len(l))
    ]