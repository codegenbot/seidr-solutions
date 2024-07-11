```
def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    temp = ""
    for char in s + s:
        if char in "(a-zA-Z)":
            temp += char
        elif temp and len(temp) == 1:
            if temp[0] in "({})" and result:
                if result[-1] == '(' and temp[0] == ')':
                    return ""
                elif temp[0] == ')' and result[-1] == '(':
                    temp += ")"
                else:
                    temp = "(" + temp
            else:
                if result and len(result) > 2 and temp[0] == result[-1]:
                    if temp[0].lower() in "abcdefghijklmnopqrstuvwxyz":
                        result = result[:-1]
                    elif temp[0] == ')':
                        temp += "("
                result += temp
            temp = ""
        elif not temp:
            continue
    return result