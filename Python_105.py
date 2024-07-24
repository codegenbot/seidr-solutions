def by_length(arr):
    return [num_to_name(num) for num in sorted(arr) if 1 <= num <= 9][::-1]

def num_to_name(num):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[num - 1] if 1 <= num <= 9 else ''