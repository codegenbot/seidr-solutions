def sort_third(l: list):
    return [element for sublist in [sorted(l[i:i+3], key=lambda x: x % 10) if i+2 < len(l) else l[i:] for i in range(0, len(l), 3] for element in sublist]