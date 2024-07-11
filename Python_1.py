```
def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    temp = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            if temp != "":
                result.append(temp)
            temp = ""
            stack.append("(")
        elif char == ")":
            stack.pop()
            if stack and stack[-1] == "(":
                temp += ")"
            else:
                if temp != "":
                    result.append(temp)
                temp = ""
    
    if temp != "":
        result.append(temp)
    
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))