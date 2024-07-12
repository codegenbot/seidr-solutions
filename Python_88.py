```
while True:
    try:
        array = list(map(int, input("Enter an array: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    print(f"Original Array: {array}")
    if total % 2 != 0:
        print(f"Sorted in ascending order: {sorted(array)}")
    else:
        print(f"Sorted in descending order: {sorted(array, reverse=True)}")