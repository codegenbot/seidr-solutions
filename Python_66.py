def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
    return total

print(digitSum("You arE Very Smart"))