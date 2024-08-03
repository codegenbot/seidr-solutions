from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0

    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            if count < 0:  
                return ["Invalid Input: Unbalanced Parentheses"]
            temp += char
            if count == 0:
                result.append(temp)
                temp = ""
        else:
            return ["Invalid Input: Invalid Character Found"]

    if count != 0:
        return ["Invalid Input: Unbalanced Parentheses"]
        
    return result