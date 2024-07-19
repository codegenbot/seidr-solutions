from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
            if temp.count('(') == temp.count(')'):
                result.append(temp)
                temp = ""
    return result

# Read input from user
paren_string = input()
if set(paren_string) == {'(', ')'} and paren_string[0] == '(' and paren_string[-1] == ')':
    print(separate_paren_groups(paren_string))
else:
    print("Please enter a string with properly enclosed parentheses.")