def sort_third(l: list):
    return [sorted(l[i:i+3], reverse=True) for i in range(0, len(l), 3)]