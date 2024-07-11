```
def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        array.sort()
        median = array[len(array) // 2]
        greater_than_or_equal_median = [x for x in array if x >= median]
        less_than_median = [x for x in array if x < median]
        return greater_than_or_equal_median + less_than_median