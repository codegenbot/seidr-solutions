def sort_third(l: list):
    return [
        x if i % 3 != 0 else min([y for y in l[:i] + l[i + 1:] if y % 3 == 0], default=l[i])
        for i, x in enumerate(sorted(l))
    ]