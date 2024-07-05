def sort_third(l):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[: i // 3 * 3 + i % 3 :] if x % 3 != 0])[-1]
        )
        if i // 3 * 3 + i % 3 < len(l)
        else pass
        for i in range(len(l))
    ]