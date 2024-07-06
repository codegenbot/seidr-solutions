def sort_array(array):
    if len(array) == 0:
        return array
    array.sort()
    total = sum(array)
    if total % 2 != 0:
        return array
    else:
        return array[::-1]