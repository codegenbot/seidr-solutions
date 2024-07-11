def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        elif 'a' <= char <= 'z':
            total += ord(char) - 96
    return total