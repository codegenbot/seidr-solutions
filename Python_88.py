```
def sort_array(array):
    if len(array) == 0:
        return array
    total = sum([array[0], array[-1]])
    result = array.copy()
    if total % 2 != 0:
        result.sort()
    else:
        result.sort(reverse=True)
    return result