def sort_third(l: list):
    return [elem for group in [sorted(l[i:i+3]) for i in range(0, len(l), 3)] for elem in group]