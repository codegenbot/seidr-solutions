def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" or char == ")":
            if temp != "":
                result.append(temp)
            temp = ""
        elif temp == "":
            temp += char
        else:
            if char == "(" and not temp.startswith("("):
                result.append(temp + "(")
                temp = ""
            elif char == ")" and not temp.endswith(")"):
                while temp and temp[-1] != "(":
                    result.append(temp)
                    temp = temp[:-1]
                result.append("(" + temp + ")")
                temp = ""
            else:
                temp += char
    if temp != "":
        result.append(temp)
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))