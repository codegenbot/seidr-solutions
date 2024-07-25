```
def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isalnum():
            if char.isdigit():
                total += int(char)
            else:
                total += ord(char) - 96
    return total

print(digitSum("You arE Very Smart"))