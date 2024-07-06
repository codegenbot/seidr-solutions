def sort_array(array):
    if len(array) == 0:
        return array
    odd = sorted([num for num in array if num % 2 != 0])
    even = sorted([num for num in array if num % 2 == 0], reverse=True)
    if sum(array) % 2 != 0:
        return odd + even
    else:
        return even + odd