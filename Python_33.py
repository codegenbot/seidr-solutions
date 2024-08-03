def sort_third(l: list):
    return [
        (
            l[i]
            if i % 3 != 0
            else sorted([x for x in l[: i // 3 * 3 + l[i::-3]] if x != l[i]])[0]
        )
        for i in range(len(l))
    ]