```
def sort_array(*args):
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() == "S":
            break
        elif user_choice.upper() == "Q":  
            return []
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or Q to quit."
            )

    while True:
        arr_str = input("Enter numbers separated by space: ")
        try:
            arr = [int(i) for i in arr_str.split()]
            break
        except ValueError as e:
            print("Error: Array contains non-integer values. Try again!")

    if not arr:
        while True:
            try:
                arr = [int(i) for i in input().split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values. Try again!")

    while True:
        user_choice = input("Do you want to sort (S) or find unique elements (U)? ")
        if user_choice.upper() in ["S", "U"]:
            break
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
            )

    if user_choice.upper() == "U":
        result = set(arr)
    else:
        result = sorted(arr)
    return result