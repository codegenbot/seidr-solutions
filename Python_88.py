```
def sort_array(array):
    if len(array) == 0:
        return array
    total_sum = sum([array[0], array[-1]])
    result = array.copy()
    if total_sum % 2 == 0:
        result.sort(reverse=True)
    else:
        result.sort()
    return result