def sort_array(arr=None):
    if arr is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = arr
    return sorted(array)