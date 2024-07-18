def sort_even(l: list):
    even_indices = sorted([x for x in l[::2]])
    result = [l[i] if i % 2 != 0 else even_indices.pop(0) for i in range(len(l))]
    return result