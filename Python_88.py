def sort_array(input_array=None):
    if input_array is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = input_array
    return sorted(array, key=int)