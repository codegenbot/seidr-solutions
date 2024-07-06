```
def sort_array(input_array=None):
    if not isinstance(input_array, list):
        print("Error: Input type is incorrect")

    array = []
    user_choice = input("Do you want to (1) provide your own array or (2) use default array? ")

    if user_choice == "1":
        while True:
            try:
                array_str = input("Enter numbers separated by space: ")
                if not array_str:
                    print("Array cannot be empty. Please enter numbers separated by space:")
                    continue
                array = [int(i) for i in array_str.split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")
    else:
        while True:
            try:
                array_str = input("Enter default numbers separated by space: ")
                if not array_str:
                    print("Array cannot be empty. Please enter numbers separated by space:")
                    continue
                array = [int(i) for i in array_str.split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")

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