def sort_third(l: list):
    return [sorted(l[i:i+3], key=lambda x: x) if i+2 < len(l) else l[i:] for i in range(0, len(l), 3)]