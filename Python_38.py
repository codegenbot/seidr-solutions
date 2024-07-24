def decode_cyclic():
    s = input("Enter the cyclic string: ")
    if len(s) < 3 or not all(c in 'abcd' for c in s):
        return "Invalid Input"
    
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if group == 'abc':
            result += group
        elif group == 'bcd':
            result += group
        else:
            result += group[2] + group[1] + group[0]
        i = (i+3)%len(s)
    return result

print(decode_cyclic())