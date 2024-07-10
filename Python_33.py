def sort_third(l: list[int]) -> list:
    l = [l[i:i+3] for i in range(0, len(l), 3)]
    return [sorted(sublist, key=lambda x: x[2]) for sublist in l]