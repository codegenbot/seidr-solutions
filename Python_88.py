```
def sort_array(array):
    if len(array) == 0:
        return array
    first_last_sum = array[0] + array[-1]
    if first_last_sum % 2 == 0:
        sorted_array = sorted(array)
    else:
        sorted_array = sorted(array)[::-1]
    return sorted_array