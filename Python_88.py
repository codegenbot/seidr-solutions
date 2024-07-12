def sort_array(arr):
    return sorted(map(int, arr))


while True:
    try:
        array_str = input("Enter an array: ")
        array = list(map(str.strip, array_str.split()))
        if len(array) < 2 or not all(
            x.replace(".", "", 1).replace("-", 1).isdigit() for x in array
        ):
            print(
                "Array should have at least two elements and all elements should be numbers. Please enter again."
            )
            continue
        print(sort_array(array))
        break
    except ValueError as e:
        print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")