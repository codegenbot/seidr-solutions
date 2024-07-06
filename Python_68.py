
def pluck(arr):
    if len(arr) == 0:
        return []
    smallest_even = None
    smallest_index = None
    for i, node in enumerate(arr):
        if node % 2 == 0 and (smallest_even is None or node < smallest_even):
            smallest_even = node
            smallest_index = i
    return [smallest_even, smallest_index]