def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array = list(map(int, input("Enter an array: ").split()))
        print(sort_array(array))
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")