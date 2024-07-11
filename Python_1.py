```
def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")":
            if temp and temp[-1] == "(":
                temp += char
            else:
                while temp and temp[-1] != "(":
                    result.append("(" + temp[:4])
                    temp = temp[4:]
                temp += char
    if temp:
        result.append(temp)
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))