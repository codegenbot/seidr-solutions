def sort_array(input_array=None):
    if input_array is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = sorted(input_array)
    return array