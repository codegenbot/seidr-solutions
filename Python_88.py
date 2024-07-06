def sort_array(array):
    if len(array) == 0:
        return array
    odd = [num for num in array if num % 2 != 0]
    even = [num for num in array if num % 2 == 0]
    if sum(array) % 2 != 0:
        return sorted(odd + even)
    else:
        return sorted(even, reverse=True) + sorted(odd)