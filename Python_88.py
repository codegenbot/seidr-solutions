```
array = [int(i) for i in input().split()]
def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)

try:
    print(sort_array(array))
except ValueError:
    print("Invalid input. Please enter space-separated integers.")