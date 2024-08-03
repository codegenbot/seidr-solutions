```
def sort_array(array):
    if len(array) == 0:
        return array
    sum_first_last = array[0] + array[-1]
    sorted_array = array.copy()
    if sum_first_last % 2 != 0:
        sorted_array.sort()
    else:
        sorted_array.sort(reverse=True)
    return sorted_array