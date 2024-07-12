def sort_third(l: list):
    return sorted(
        [element for i in range(0, len(l), 3) for element in sorted(l[i : i + 3])]
    )