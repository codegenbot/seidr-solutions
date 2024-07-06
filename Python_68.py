def pluck(arr):
    if not arr:
        return []
    even_values = [x for x in arr if x % 2 == 0]
    if not even_values:
        return []
    smallest_even_value = min(even_values)
    index = arr.index(smallest_even_value)
    return [smallest_even_value, index]