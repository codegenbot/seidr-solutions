def sort_even(l: list):
    even_elements = [x for i, x in enumerate(l) if i % 2 == 0]
    return sorted(even_elements)