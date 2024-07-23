def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, (x, y)) in zip(
            range(len(l)), 
            [(l[i], l[i + 1]) if i < len(l) - 1 else (l[i],) for i in range(len(l))]
        )
    ][::2] + l[1::2]