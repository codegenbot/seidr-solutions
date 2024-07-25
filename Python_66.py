def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        elif char == 'e':
            total += 2
        elif char == 'o':
            total += 1
        elif char == 'a' or char == 'i':
            total += 3  
    return total

print(digitSum("You arE Very Smart"))