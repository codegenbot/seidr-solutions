def digitSum(s):
    total = 0
    for char in s:
        if char.isalnum():
            if char.isdigit():
                total += int(char)
            elif 'a' <= char <= 'z':
                total += ord('a') - 96
            else:
                total += ord('A') - 64
    return total