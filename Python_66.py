def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        elif char == 'e':
            total += 1 if char.isdigit() else 1
        elif char == 'o':
            total += 1 if char.isdigit() else 1
        elif char == 'a' or char == 'i':
            total += 2
    return total

print(digitSum("You arE Very Smart"))