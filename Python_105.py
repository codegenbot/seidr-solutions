def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    return [''.join(filter(str.isalpha, word.capitalize())) for word in [num_to_name(i-1) for i in reversed(sorted_arr)]]


def num_to_name(num):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[num - 1]