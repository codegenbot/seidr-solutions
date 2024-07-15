def sort_third(l: list):
    l = [l[i:i+3] for i in range(0, len(l), 3) if len(l[i:i+3]) == 3]
    return sorted(l, key=lambda x: x[2])