```Python
def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" or char == ")":
            if temp != "":
                result.append(temp)
            temp = ""
        elif temp + " " + char[0] + " " == "( (" or temp + " " + char[0] + " " == ")) (" :
            temp += " "
            temp += char
        else:
            temp += char
    if temp != "":
        result.append(temp)
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))