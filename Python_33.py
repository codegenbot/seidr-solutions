def sort_third(l: list):
    return [
        (
            i
            if i < len(l) and (i % 3 != 0 or not any(x % 3 == 0 for x in l[:i]))
            else sorted([x for x in l[:i] + l[i + 1 :] if x % 3 == 0])[::-1]
        )
        for i in range(len(l))
    ]