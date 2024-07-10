def sum_of_digits_in_string(s):
    total = 0
    for char in s:
        if char.isdigit():
            total += int(char)
    return total