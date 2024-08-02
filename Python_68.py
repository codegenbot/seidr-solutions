def pluck(arr):
    even_values = [num for num in arr if num % 2 == 0]
    if not even_values:
        return []

    smallest_even_value = min(even_values)
    smallest_even_value_index = arr.index(smallest_even_value)
    
    return [smallest_even_value, smallest_even_value_index]