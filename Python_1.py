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
if len(paren_string) % 2 == 0 and paren_string.count('(') == paren_string.count(')'):
    print(separate_paren_groups(paren_string))
else:
    print("Please enter a string with properly enclosed parentheses.")