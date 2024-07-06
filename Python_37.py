def sort_even(l: list):
    even_indices = [i for i in range(0, len(l), 2)]
    sorted_even_values = sorted([l[i] for i in even_indices])
    return [sorted_even_values[i // 2] if i % 2 == 0 else l[i] for i in range(len(l))]