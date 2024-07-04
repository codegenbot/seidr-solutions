def pluck(arr):
    if not arr:
        return []
    min_even_val = float('inf')
    min_even_index = -1
    for i, val in enumerate(arr):
        if val % 2 == 0 and val < min_even_val:
            min_even_val = val
            min_even_index = i
    return [min_even_val, min_even_index] if min_even_index != -1 else []