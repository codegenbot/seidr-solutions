def digitSum(s):
    total = 0
    for char in s:
        if char.isdigit():
            total += int(char)
        elif char.isalpha():
            total += ord(char.upper()) - 55
    return total