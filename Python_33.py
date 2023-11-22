def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        result.extend(sorted(l[i:i+3]))
    return result