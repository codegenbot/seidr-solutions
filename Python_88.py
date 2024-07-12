```
def sort_array(arr):
    return sorted(arr)

while True:
    try:
        array = list(map(int, input("Enter an array: comma-separated ").split(',')))
        print(sort_array(array))
        break
    except ValueError:
        print("Invalid input. Please enter numbers comma-separated.")