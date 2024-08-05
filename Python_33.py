def sort_third(l: list):
    return [
        element for i in range(0, len(l), 3) for element in sorted(l[i : i + 3])
    ] + l[len(l) - len(l) % 3 :]