def sort_even(l):
    return [
        (
            i
            if j < len(l) and (j % 2 != 0 or not l[i])
            else sorted([x for x in l if (j - i) % 2 == 0])[::-1][i % 2]
        )
        for i, _ in enumerate(l)
        if i < len(l)
        for j in range(i + 1)
    ]