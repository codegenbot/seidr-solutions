def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = [l[i] for i in even_indices]
    sorted_even_values = sorted(even_values)
    for i, value in zip(even_indices, sorted_even_values):
        l[i] = value
    return l