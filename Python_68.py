def pluck(arr):
    even_values = [num for num in arr if num % 2 == 0]
    if not even_values:
        return []
    min_even = min(even_values)
    min_even_index = arr.index(min_even)
    return [min_even, min_even_index]