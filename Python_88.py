def sort_array(array):
    # Check if sum of first and last index values is odd or even
    if (array[0] + array[-1]) % 2 == 1:
        # Sort in ascending order
        return sorted(array)
    else:
        # Sort in descending order
        return sorted(array, reverse=True)