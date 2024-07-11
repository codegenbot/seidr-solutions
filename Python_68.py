def pluck(arr):
    even_values = [x for x in arr if x % 2 == 0]
    if not even_values:
        return []
    smallest_even = min(even_values)
    smallest_even_index = arr.index(smallest_even)
    return [smallest_even, smallest_even_index]