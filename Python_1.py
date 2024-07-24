from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    opened = 0

    for char in paren_string:
        if char == "(":
            opened += 1
            if opened > 1:
                current_group += char
        elif char == ")" and opened > 0:
            opened -= 1
            if opened > 0:
                current_group += char
            else:
                result.append(current_group)
                current_group = ""
        elif opened > 0:
            current_group += char
        else:
            result[-1] += char

    return result

# Call the function with input string for testing
input_string = "abc(de)fg(hi(jk)lm)n"
print(separate_paren_groups(input_string))