def sort_third(l):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[:min((i + 2) // 3 * 3, len(l))] if x % 3 != 0])[-1]
        )
        for i in range(len(l))
    ]