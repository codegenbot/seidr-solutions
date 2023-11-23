def by_length(arr):
    arr = [num for num in arr if 1 <= num <= 9]
    arr.sort()
    arr.reverse()
    return ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][num - 1 for num in arr]