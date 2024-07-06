def sort_array(input_array=None):
    if not isinstance(input_array, list):
        print("Error: Input type is incorrect")
    if input_array is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = [int(i) for i in input_array]
    try:
        if all(isinstance(x, int) for x in array):
            return sorted(array)
        return set(array)
    except ValueError as e:
        print("Error: Array contains non-integer values")