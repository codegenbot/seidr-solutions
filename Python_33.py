def sort_third(l: list):
    return [
        (
            l[i - 1]
            if (i := len(l)) > 1 and i % 3 != 0
            else min([x for x in l if x % 3 == 0])
        )
        for i in range(len(l))
    ]