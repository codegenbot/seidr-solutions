def decode_cyclic():
    while True:
        s = input("Enter the cyclic string: ")
        if len(set(s)) > 1: 
            break
        else:
            print("Invalid input. Please enter a string with more than one unique character.")
    result = ""
    i = 0
    if len(s) <= 1:
        return s
    while True:
        group = s[i] + ''.join(s[i+1:i+2][::-1]) + s[i]
        if i > 0:
            result += group[-1] + group[1:-1][::-1] + group[0]
        else:
            result = group
        i = (i+1)%len(s)
        if i == 0:
            break
    return result