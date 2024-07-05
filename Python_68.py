def pluck(arr):
    if len(arr) == 0:
        return []
    else:
        even_numbers = [x for x in arr if x % 2 == 0]
        if not even_numbers:
            return []
        min_even = min(even_numbers)
        min_index = arr.index(min_even)
        return [min_even, min_index]