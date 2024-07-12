def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array = list(map(int, input("Enter an array: \"separated by spaces\": ").split()))
        print(sort_array(array))
        break
    except ValueError as e:
        print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")