def sort_third(l: list):
    remainder = 3 - len(l) % 3
    l += [float('inf')] * remainder if remainder != 3 else []
    return [sorted(l[i:i+3], key=lambda x: x[2]) for i in range(0, len(l), 3)]