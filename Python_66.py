def digitSum(s):
    total = 0
    for char in s:
        if char.isdigit():
            total += int(char)
        elif char.isalpha() and char.isalnum():  
            total += ord('a' if char.islower() else 'A') - 96
    return total