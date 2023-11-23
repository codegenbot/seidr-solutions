def sort_array(array):
    return sorted(array, reverse=(sum(array[::len(array)-1]) % 2 == 0))