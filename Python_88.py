def sort_array(*args):
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() != "S":
            continue
        break

    while True:
        arr_str = input("Enter numbers separated by space: ")
        try:
            arr = [int(i) for i in arr_str.split()]
            break
        except ValueError as e:
            print("Error: Array contains non-integer values")

    user_choice = input("Do you want to sort (S) or find unique elements (U)? ")
    if user_choice.upper() in ["S", "U"]:
        return sorted(arr) if user_choice.upper() == "S" else set(arr)
    else:
        print(
            "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
        )