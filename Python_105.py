def by_length(arr):
    arr = sorted([x for x in arr if 1 <= x <= 9])
    arr = arr[::-1]
    return ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][x-1 for x in arr]