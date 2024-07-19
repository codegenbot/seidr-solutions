def sort_third(l: list):
    return sorted([element for sublist in [sorted(l[i:i+3], reverse=True) for i in range(0, len(l), 3)] for element in sublist], reverse=True)