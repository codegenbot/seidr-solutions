```
def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array_str = input("Enter an array: ")
        array = list(map(int, array_str.split()))
        if len(array) < 2:
            print("Array should have at least two elements. Please enter again.")
            continue
        print(sort_array(array))
        break
    except ValueError as e:
        print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")