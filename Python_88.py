def sort_array(array):
    if len(array) == 0:
        return array
    first_last_sum = array[0] + array[-1]
    is_odd = first_last_sum % 2 != 0
    sorted_array = array if is_odd else array[::-1]
    return sorted_array