def decode_cyclic():
    while True:
        s = input("Enter the cyclic string: ")
        if len(s) >= 3:
            break
        else:
            print("Invalid input. Please enter a string with at least 3 characters.")

    result = ""
    i = 0
    if len(s) >= 3:
        while True:
            if i + 2 <= len(s):
                group = s[i:i+3]
            else:
                group = s[i:] + s[:i+1]
            result += group[-1] + group[1:-1][::-1] + group[0]
            i = (i+3)%len(s)
            if i == 0:
                i = len(s) - 3
            if i == 0:
                break
        return result
    else:
        return s

print(decode_cyclic())