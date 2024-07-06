
def pluck(arr):
    if len(arr) == 0:
        return []
    else:
        smallest_even = min([node for node in arr if node % 2 == 0])
        smallest_even_index = arr.index(smallest_even)
        return [smallest_even, smallest_even_index]