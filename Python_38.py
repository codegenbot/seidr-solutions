```
def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    for char in s:
        if char == 'a':
            result += 'd'
        elif char == 'b':
            result += 'c'
        else:
            result += char
    return result

print(decode_cyclic())