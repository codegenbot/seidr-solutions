def find_average_and_median(array):
    average = sum(array) / len(array)
    array.sort()
    median = len(array) // 2
    if len(array) % 2 != 0:
        return [average, array[median]]
    else:
        return [average, array[median - 1 : median + 1]]