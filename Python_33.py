def sort_third(l: list):
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3]) | [item for sublist in sorted_third for item in sublist]