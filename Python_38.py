```
def decode_cyclic():
    s = input("Enter a string: ")
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)

print(decode_cyclic())