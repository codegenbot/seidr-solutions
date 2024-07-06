```
def sort_array(input_array=None):
    if not isinstance(input_array, list):
        print("Error: Input type is incorrect")
    if input_array is None:
        array = list(map(int, input("Enter numbers separated by space: ").split()))
    else:
        array = [int(i) for i in input_array]
    try:
        return sorted(set(array))
    except TypeError as e:
        print("Error: Array contains non-integer values")