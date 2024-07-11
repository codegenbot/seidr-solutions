```
def sort_array(array):
    if len(array) == 0:
        return array
    sorted_array = sorted(array)
    middle_index = len(sorted_array) // 2
    if len(sorted_array) % 2 != 0:
        return [sorted_array[-1]]
    else:
        return [sorted_array[:middle_index], sorted_array[middle_index:]]