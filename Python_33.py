def sort_third(l: list):
    return [
        (
            l[i]
            if i % 3 != 0
            else sorted([x for x in l[:i] + l[i + 1 :] if type(x) == int])[0]
        )
        for i in range(len(l))
    ]