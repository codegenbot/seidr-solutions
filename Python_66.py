def digitSum(s):
    total = 0
    for char in s:
        if char.isdigit() or ('a' <= char <= 'z' or 'A' <= char <= 'Z'):
            if char.isdigit():
                total += int(char)
            elif 'a' <= char <= 'z':
                total += ord(char) - 96
            else:
                total += ord(char) - 64
    return total