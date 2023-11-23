def by_length(arr):
    arr = [x for x in arr if 1 <= x <= 9]
    arr.sort()
    arr.reverse()
    result = []
    for x in arr:
        result.append(["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][x-1])
    return result