def sort_even(l: list):
    return [
        (
            i
            if i % 2 != 0
            else l[sorted([j for j in range(len(l)) if (j := x) % 2 == 0])[-1]][::-1][x % 2]
        )
        for index, i in enumerate(l)
    ]