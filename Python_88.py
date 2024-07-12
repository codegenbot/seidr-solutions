```
while True:
    try:
        array = list(map(int, input("Enter an array: ").split()))
        print(array)
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)

while True:
    try:
        print(sort_array(array))
    except Exception as e:
        print(f"An error occurred: {e}")
        break