def sort_even(l):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = sorted([l[i] for i in even_indices])
    return [even_values[i // 2] if i % 2 == 0 else l[i] for i in range(len(l))]