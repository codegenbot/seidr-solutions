def pluck(arr):
    smallest_even = None
    smallest_index = -1
    
    for i, val in enumerate(arr):
        if val % 2 == 0:
            if smallest_even is None or val < smallest_even:
                smallest_even = val
                smallest_index = i
    
    return [smallest_even, smallest_index] if smallest_even is not None else []