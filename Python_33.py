def sort_third(l: list):
    sorted_values = sorted(l[::3])
    result = [sorted_values.pop(0) if i % 3 == 0 else value for i, value in enumerate(l)]
    return result