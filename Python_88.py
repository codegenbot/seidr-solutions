def sort_array(array):
    if sum(array[0], array[-1]) % 2 == 0:
        return sorted(array, reverse=True)
    else:
        return sorted(array)