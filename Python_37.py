def sort_even(l: list):
    even_indices = sorted([num for num in l[::2]])
    sorted_list = [even_indices.pop(0) if i % 2 == 0 else l[i] for i in range(len(l))]
    return sorted_list