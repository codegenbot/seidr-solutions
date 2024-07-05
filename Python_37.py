def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = sorted([l[i] for i in even_indices])
    return [
        l[i] if i not in even_indices else even_values[i // 2] for i in range(len(l))
    ]