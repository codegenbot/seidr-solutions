```
def sort_array(array):
    if len(array) == 0:
        return array
    sum_first_last = array[0] + array[-1]
    if sum_first_last % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)