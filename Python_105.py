def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    return [translate(i) for i in reversed(sorted_arr)]


def translate(n):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[n - 1]