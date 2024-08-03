
def sort_third(l: list):
    return [element for triplet in [sorted(l[i:i+3]) for i in range(0, len(l), 3)] for element in triplet]