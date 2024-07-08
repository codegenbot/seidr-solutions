def sort_third(l: list):
    l = [sorted(l[i:i+3]) for i in range(0, len(l), 3]
    return [elem for sublist in l for elem in sublist]