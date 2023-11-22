def sort_third(l: list):
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3) for j in range(min(3, len(l)-i-1))]