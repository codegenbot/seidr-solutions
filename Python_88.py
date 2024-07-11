def sort_array(array):
    if len(array) == 0:
        return array
    array.sort()
    if len(array) % 2 != 0:
        return [array[-1]]
    else:
        mid = (len(array) // 2)
        return [array[:mid], array[mid:]]