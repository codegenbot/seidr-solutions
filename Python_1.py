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
            if char == "(" and (temp and temp[-1] == ")"):
                if temp:
                    result.append(temp)
                temp = "( "
            elif char == ")" and not temp.startswith("( "):
                temp += ")"
                while temp and temp[0] != "( ":
                    result.append("(" + temp[:4])
                    temp = temp[4:]
        else:
            temp += char
    if temp != "":
        result.append(temp)
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))