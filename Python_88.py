def find_median(array):
    array.sort()
    n = len(array)

    if n % 2 != 0:
        return [array[n//2]]
    else:
        median = (array[n//2 - 1] + array[n//2]) / 2
        return [median]