def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[1] == "(" and temp[2] == ")":
                if result != "":
                    result += " "
                result += temp[:1]
            elif temp[0] == temp[2]:
                if temp[0] == "(":
                    result += "(" + temp[1:-1] + ")"
                else:
                    result += temp[1:-1] + temp[0]
            else:
                result += temp
            temp = ""
    return result.strip()