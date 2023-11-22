def by_length(arr):
    arr = [x for x in arr if 1 <= x <= 9]
    arr.sort()
    arr.reverse()
    return [
        ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][x - 1]
        for x in arr
    ]