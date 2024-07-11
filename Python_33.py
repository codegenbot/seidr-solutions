def sort_third(l: list):
    return [sorted(l[i:i+3]) if i % 3 == 0 and i + 2 < len(l) else l[i] for i in range(len(l))]