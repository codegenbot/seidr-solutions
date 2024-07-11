def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    for char in s:
        if char == "(":
            temp = ""
            for i in range(2):
                temp += s[s.index(char) + i + 1]
            if temp[0] == ")":
                result += temp
                temp = ""
            else:
                while True:
                    if len(temp) % 3 == 1 and temp[-1] == "(":
                        result += temp
                        break
                    elif temp[-1] == "(":
                        result += temp + temp[0]
                        temp = ""
                        break
                    else:
                        result += temp
                        temp = ""
            result += temp
        else:
            result += char
    return result