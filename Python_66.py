def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        elif char.isalpha():
            continue
    return total

print(digitSum("You arE Very Smart"))