```
def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit() or (char.isalpha() and char in '0123456789'):
            total += int(char)
    return total

print(digitSum("You arE Very Smart"))