def sort_third(l: list[int]) -> list:
    return [sorted(l[i : i + 3], key=lambda x: x) for i in range(0, len(l), 3)]