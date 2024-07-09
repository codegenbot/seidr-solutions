def pluck(arr):
    even_values = [x for x in arr if x % 2 == 0]
    if not even_values:
        return []
    min_even_value = min(even_values)
    min_even_index = arr.index(min_even_value)
    return [min_even_value, min_even_index]