def sort_array(input_array=None):
    if not isinstance(input_array, list):
        print("Error: Input type is incorrect")
    if input_array is None:
        while True:
            try:
                array = list(map(int, input("Enter numbers separated by space: ").split()))
                break
            except ValueError as e:
                print("Error: Input contains non-integer values. Please enter integers separated by space.")
                
    else:
        array = [int(i) for i in input_array]

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