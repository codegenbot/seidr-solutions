def sort_even(l: list):
    even_indices = sorted([x for x in l[::2]])
    result = [even_indices.pop(0) if i % 2 == 0 else l[i] for i in range(len(l))]
    return result