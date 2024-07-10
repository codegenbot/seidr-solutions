def digitSum(s):
    s = s.lower()
    total = 0
    is_odd = False
    for c in s:
        if not c.isdigit() or c.isspace():  
            continue
        d = int(c)
        if is_odd:
            total += d if d < 5 else d * 2 - 5
        else:
            total += d
        is_odd = not is_odd
    return total

input_string = input("Enter a string: ")
print(digitSum(input_string))