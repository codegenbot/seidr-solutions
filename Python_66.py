def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        elif char == 'e':
            total += 3
        elif char == 'o':
            total += 0
    return total

print(digitSum("You arE Very Smart"))