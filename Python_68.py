def pluck(arr):
    # Initialize variables to keep track of the smallest even value and its index
    smallest_even = None
    smallest_index = None

    # Iterate over the array and find the smallest even value and its index
    for i, node in enumerate(arr):
        if node % 2 == 0 and (smallest_even is None or node < smallest_even):
            smallest_even = node
            smallest_index = i

    # Return the plucked node in a list, [smallest_value, its index]
    return [[smallest_even, smallest_index]] if smallest_even is not None else []