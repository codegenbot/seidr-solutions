def sort_third(l: list):
    return [item for sublist in [sorted(l[i:i+3]) for i in range(0, len(l), 3)] for item in sublist]  # Sort each sublist of size 3 and flatten the list