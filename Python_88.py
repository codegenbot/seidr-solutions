def sort_array(array):
    sorted_array = sorted(array)
    median = len(sorted_array) // 2
    if len(sorted_array) % 2 != 0:
        return [sorted_array[median]]
    else:
        return [sorted_array[:median], sorted_array[median:]]