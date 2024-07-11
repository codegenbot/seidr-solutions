def sort_array(array):
    if len(array) == 0:
        return []
    if sum([array[0], array[-1]]) % 2 != 0:
        return sorted(array)
    else:
        return sorted(array)[::-1]