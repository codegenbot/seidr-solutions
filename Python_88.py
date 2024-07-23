def sort_array(array):
    if len(array) == 0:
        return array
    total = array[0] + array[-1]
    new_array = sorted(array)
    return new_array if total % 2 != 0 else new_array[::-1]