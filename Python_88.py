def sort_array():
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() != "S":
            continue
        break

    if not isinstance(input("Enter numbers separated by space: "), str):
        print("Error: Input type is incorrect")

    try:
        array = [int(i) for i in input().split()]
    except ValueError as e:
        print("Error: Array contains non-integer values")
        return sort_array()

    if not array:
        print("Array cannot be empty. Please enter numbers separated by space:")
        while True:
            try:
                array = [int(i) for i in input().split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")
                return sort_array()

    user_choice = input("Do you want to sort (S) or find unique elements (U)? ")

    while True:
        if user_choice.upper() == "S":
            return sorted(array)
        elif user_choice.upper() == "U":
            return set(array)
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
            )
            user_choice = input("Do you want to sort (S) or find unique elements (U)? ")