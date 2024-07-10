def sort_third(l: list[list[int]]) -> list:
    return [sorted(l[i : i + 3], key=lambda x: x[2]) for i in range(0, len(l), 3)]