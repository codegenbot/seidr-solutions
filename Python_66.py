def digitSum(s):
    s = s.lower()
    total = 0
    for c in s:
        if not c.isdigit() and c != '-':  
            continue
        d = int(c)
        total += d
    return total

input_string = input("Enter a string: ")
print(digitSum(input_string))