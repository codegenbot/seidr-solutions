def pluck(arr):
    even_values = [num for num in arr if num % 2 == 0]
    if len(even_values) == 0:
        return []
    smallest_value = min(even_values)
    smallest_index = arr.index(smallest_value)
    return [smallest_value, smallest_index]