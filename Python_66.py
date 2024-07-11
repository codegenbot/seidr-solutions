def digitSum(s):
    total = 0
    for char in s:
        if char.isdigit():
            total += int(char)
        elif char.isalpha():
            total += ord(char.isupper() and char or char.lower()) - 96
    return total