from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    level = 0
    
    for char in paren_string:
        if char == "(":
            if level > 0:
                group += char
            level += 1
        elif char == ")":
            level -= 1
            if level > 0:
                group += char
            if level == 0:
                result.append(group + char)
                group = ""
    
    return result

# Test cases provided by the user
input_string = "((test)case)(sample)"
print(separate_paren_groups(input_string))

input_string = "(hello(world))(python(is)(awesome))"
print(separate_paren_groups(input_string))