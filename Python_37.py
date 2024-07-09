def sort_even(l: list):
    return [
        i if j % 2 != 0 else sorted([x for x in l[:min(j+1, len(l)) if (j - i) % 2 == 0])[::-1][i % 2]
        for i, j in enumerate(l)
    ]