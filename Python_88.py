```
array = list(map(int, input("Enter an array: ").split()))


def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)


print(sort_array(array))