def sort_third(l: list):
    remainder = len(l) % 3
    l += [float('inf')] * (3 - remainder) if remainder != 0 else []
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3)]