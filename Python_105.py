def by_length(arr):
    arr = [i for i in arr if 1 <= i <= 9]
    arr.sort()
    arr.reverse()
    return ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][i-1 for i in arr]