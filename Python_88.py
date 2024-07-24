```
def sort_array(array):
    if len(array) == 0:
        return array
    sum_start_end = array[0] + array[-1]
    if sum_start_end % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)