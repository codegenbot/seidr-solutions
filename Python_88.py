def sort_array(array):
    array.sort()
    median = len(array) // 2
    if len(array) % 2 != 0:
        return [array[median]]
    else:
        return [array[:median], array[median:]]