def sort_third(l: list):
    return [lst for sublist in [sorted(l[i:i+3], key=lambda x: x[2]) for i in range(0, len(l), 3)] for lst in sublist] 