def sort_array(*args):
    while True:
        user_choice = input("Do you want to sort array? (S for yes): ")
        if user_choice.upper() != "S":
            continue
        break

    arr_str = input("Enter numbers separated by space: ")
    try:
        arr = [int(i) for i in arr_str.split()]
    except ValueError as e:
        print("Error: Array contains non-integer values")
        return sort_array(*args)

    if not arr:
        while True:
            try:
                arr = [int(i) for i in input().split()]
                break
            except ValueError as e:
                print("Error: Array contains non-integer values")
                return sort_array(*args)

    user_choice = input("Do you want to sort (S) or find unique elements (U)? ")

    while True:
        if user_choice.upper() == "S":
            return sorted(arr)
        elif user_choice.upper() == "U":
            return set(arr)
        else:
            print(
                "Error: Invalid choice. Please enter S for sorting or U for finding unique elements."
            )
            user_choice = input("Do you want to sort (S) or find unique elements (U)? ")