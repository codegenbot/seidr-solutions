def by_length(arr):
    sorted_arr = sorted([x for x in arr if 1 <= x <= 9])
    return [names[x - 1] for x in reversed(sorted_arr)]


names = ["Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]