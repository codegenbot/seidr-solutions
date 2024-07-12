def sort_third(l: list):
    return sorted([element for sublist in [l[i:i+3] for i in range(0, len(l), 3)] for element in sublist])