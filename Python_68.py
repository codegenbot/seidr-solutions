def pluck(arr):
    even_values = [node for node in arr if node % 2 == 0]
    if not even_values:
        return []
    smallest_even_value = min(even_values)
    indices = [i for i, node in enumerate(arr) if node == smallest_even_value]
    return [[smallest_even_value, indices[0]]]