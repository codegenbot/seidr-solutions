```
def sort_array(array):
    if len(array) == 0:
        return array
    sum_first_last = array[0] + array[-1]
    if sum_first_last % 2 != 0:
        array.sort()
    else:
        array.sort(reverse=True)
    return array.copy()