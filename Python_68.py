def pluck(arr):
    if len(arr) == 0:
        return []
    else:
        smallest_even = min([x for x in arr if x % 2 == 0])
        if smallest_even is None:
            # No even number was found
            return []
        smallest_index = arr.index(smallest_even)
        return [smallest_even, smallest_index]