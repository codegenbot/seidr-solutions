```
def sort_array(array):
    if len(array) == 0:
        return array
    total = array[0] + array[-1]
    copy = array.copy()
    if total % 2 != 0:
        copy.sort()
    else:
        copy.sort(reverse=True)
    return copy