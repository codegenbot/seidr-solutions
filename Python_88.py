def sort_array(array):
    sorted_array = sorted(array)
    n = len(sorted_array)

    if n % 2 != 0:
        return [sorted_array[n//2]]
    else:
        mid1 = n // 2 - 1
        mid2 = n // 2
        return [[sorted_array[mid1], sorted_array[mid2]]]