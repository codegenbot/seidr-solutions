def digitSum(s):
    s = s.lower()
    total = 0
    for c in s:
        if c.isdigit():
            total += int(c)
    return total

input_string = input("Enter a string: ")
print(digitSum(input_string))