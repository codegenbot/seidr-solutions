```Python
def decode_cyclic():
    s = input("Enter the string: ")
    result = ""
    i = 0
    while i < len(s):
        if i+2 < len(s): 
            result += s[i+1] + s[i] + s[i+2]
            i += 3
        else:
            result += s[i:]
            break
    return result

print(decode_cyclic())