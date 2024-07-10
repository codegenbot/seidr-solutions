def sort_array(array):
    return sorted(array, reverse=(sum(array[0], array[-1]) % 2 == 0))