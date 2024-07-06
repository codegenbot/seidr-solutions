```
def sort_array(*args):
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() == "Q":
            return None
        elif user_choice.upper() != "S":
            print(
                "Error: Invalid choice. Please enter S to continue or Q to quit."
            )
            continue
        break

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