def sort_third(l: list):
    return [elem for group in [sorted(l[i:i+3]) if i % 3 == 0 else [l[i]] for i in range(len(l))] for elem in group]