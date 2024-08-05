def sort_third(l: list):
    return [sorted(l[i:i+3]) if len(l[i:i+3]) == 3 else l[i] for i in range(0, len(l), 3)]