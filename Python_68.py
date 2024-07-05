
def pluck(arr):
    if len(arr) == 0:
        return []
    else:
        min_even = min(filter(lambda x: x % 2 == 0, arr))
        min_index = arr.index(min_even)
        return [min_even, min_index]