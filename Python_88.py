```
def sort_array(input_array=None):
    if not isinstance(input_array, list):
        print("Error: Input type is incorrect")
    
    user_choice = input("Do you want to (1) provide your own array or (2) use default array? ")
    
    if user_choice == "1":
        while not array:
            try:
                array = [int(i) for i in input("Enter numbers separated by space: ").split()]
            except ValueError as e:
                print("Error: Array contains non-integer values")
    else:
        array = list(map(int, input("Enter default numbers separated by space: ").split()))

    if array is None:
        print("Array cannot be empty. Please enter numbers separated by space:")
        while not array:
            try:
                array = [int(i) for i in input().split()]
            except ValueError as e:
                print("Error: Array contains non-integer values")
    
    try:
        user_choice = input("Do you want to sort (S) or find unique elements (U)? ")

        if user_choice.upper() == "S":
            return sorted(array)
        elif user_choice.upper() == "U":
            return set(array)
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
            )
            return array
    except TypeError as e:
        print("Error: Array contains non-integer values")