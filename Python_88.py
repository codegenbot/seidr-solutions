def sort_array(array):
    return sorted(array) if (array[0] + array[-1]) % 2 == 1 else sorted(array, reverse=True)