```
def sort_array(array):
    if len(array) == 0:
        return array
    total = array[0] + array[-1]
    new_array = array.copy()
    if total % 2 != 0:
        new_array.sort()
    else:
        new_array.sort(reverse=True)
    return new_array