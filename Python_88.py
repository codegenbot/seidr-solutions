def sort_array(array):
    if not array:
        return array
    total = array[0] + array[-1]
    if total % 2 == 0:
        return sorted(array)[::-1]
    else:
        return sorted(array)