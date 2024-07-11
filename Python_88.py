def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        mid = len(array) // 2
        median = array[mid]
        return sorted(array, key=lambda x: (x > median, x))