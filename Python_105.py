def by_length(arr):
    return [number_to_name(num) for num in sorted(arr) if 1 <= num <= 9][::-1]

def number_to_name(num):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[num-1]