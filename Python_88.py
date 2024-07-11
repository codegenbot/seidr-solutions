def sort_array(array):
    if len(array) == 0:
        return array
    array.sort()
    return [
        array[: len(array) // 2],
        [array[len(array) // 2 - 1], array[len(array) // 2]],
    ] + array[len(array) // 2 :]