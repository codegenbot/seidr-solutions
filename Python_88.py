```
def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array_str = input("Enter an array: ")
        array = list(map(int, array_str.split()))
        
        if len(array) < 2:
            print("Please enter at least two numbers.")
        else:
            print(sort_array(array))
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")