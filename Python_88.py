def sort_array(input_array=None):
    if input_array is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = [int(i) for i in input_array]
    
    try:
        return sorted([i for i in array if isinstance(i, int)])
    except ValueError as e:
        return "Error: Array contains non-integer values"