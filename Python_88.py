def sort_array():
    while True:
        choice = input("Do you want to sort array? (S for yes, Q to quit): ")
        if choice.upper() == "Q":
            return None
        elif choice.upper() != "S":
            print(
                "Error: Invalid choice. Please enter S to continue or Q to quit."
            )
            continue

        arr_str = input("Enter numbers separated by space: ")

        while True:
            try:
                arr = [int(i) for i in arr_str.split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")
                arr_str = input("Enter numbers separated by space: ")

        user_choice = input("Do you want to sort (S) or find unique elements (U)? ")
        if user_choice.upper() == "U":
            result = set(arr)
        else:
            result = sorted(arr)

    return result