```
def sort_array(array):
    if len(array) == 0:
        return array
    first_last_sum = sum((array[0], array[-1]))
    sorted_array = array[:]
    if first_last_sum % 2 != 0:
        sorted_array.sort()
    else:
        sorted_array.sort(reverse=True)
    return sorted_array