def pluck(arr):
    even_values = [node for node in arr if node % 2 == 0]
    if not even_values:
        return []
    smallest_value = min(even_values)
    indices = [i for i, value in enumerate(arr) if value == smallest_value]
    return [smallest_value, min(indices)]