def by_length(arr):
    return [number_to_word(num) for num in sorted(arr) if 1 <= num <= 9][::-1]

def number_to_word(num):
    words = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return words[num-1] if num >= 1 and num <= 9 else ""