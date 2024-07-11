def sort_array(array):
    array.sort()
    n = len(array)
    if n % 2 == 0:
        median1 = array[n // 2 - 1]
        median2 = array[n // 2]
        return [median1, median2]
    else:
        return [array[n // 2]]