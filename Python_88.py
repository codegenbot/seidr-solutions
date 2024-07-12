```
def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array_str = input("Enter an array: \"separated by spaces\": ")
        if not array_str:
            print("Array cannot be empty. Please enter numbers separated by spaces.")
            continue
        array = list(map(int, array_str.split()))
        if any(not isinstance(x, int) for x in array):
            print("Invalid input. Array must only contain integers.")
            continue
        print(sort_array(array))
        break
    except ValueError as e:
        print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")