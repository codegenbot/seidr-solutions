def pluck(arr):
    even_values = [x for x in arr if x % 2 == 0]
    if not even_values:
        return []
    smallest_value = min(even_values)
    smallest_indices = [i for i, x in enumerate(arr) if x == smallest_value]
    return [[smallest_value, smallest_indices[0]]]