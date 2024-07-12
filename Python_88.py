```
while True:
    try:
        array = list(map(int, input("Enter the array elements separated by space: ").split()))
        break
    except ValueError:
        print("Invalid input! Please enter integers separated by space.")

def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)

print(sort_array(array))