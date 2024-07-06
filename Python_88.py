def sort_array(*args):
    arr = []
    
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() != "S":
            continue
        break

    while True:
        try:
            arr_str = input("Enter numbers separated by space: ")
            arr = [int(i) for i in arr_str.split()]
            break
        except ValueError as e:
            print("Error: Array contains non-integer values")
            continue

    if not arr:
        while True:
            try:
                arr = [int(i) for i in input().split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")

    while True:
        user_choice = input("Do you want to sort (S) or find unique elements (U)? ")
        if user_choice.upper() in ["S", "U"]:
            break
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
            )

    if user_choice.upper() == "S":
        return sorted(arr)
    else:
        return set(arr)