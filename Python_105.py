def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    reversed_arr = sorted_arr[::-1]
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return [names[i - 1] for i in reversed_arr]