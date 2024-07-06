def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Invalid input"

    result = ""
    temp = ""

    for char in s:
        temp += char
        if len(temp) == 3:
            result += chr(int(temp[1] + temp[0]) + ord('A'))
            temp = ""

    if temp:
        return "Invalid input"
    else:
        return result