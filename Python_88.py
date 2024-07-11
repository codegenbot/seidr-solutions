```
def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(array)
    if total % 2 != 0:
        return sorted(array)
    else:
        mid = len(array) // 2
        median = array[mid]
        left, right = [], []
        for num in array:
            if num < median:
                left.append(num)
            elif num > median:
                right.append(num)
        return left + [median] + right