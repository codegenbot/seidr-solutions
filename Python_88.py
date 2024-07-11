```
def sort_array(array):
    if len(array) == 0:
        return array
    total = array[0] + array[-1]
    if total % 2 != 0:
        array.sort()
    else:
        array.sort(reverse=True)
    return array.copy()