def sort_even(l: list):
    return [
        (
            i
            if i % 2 != 0
            else sorted((x := y) for y in l if (k := i) % 2 == 0)[::-1][k % 2 != 0]
        )
        for k, i in enumerate(l)
    ]