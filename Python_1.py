````
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    while True:
        paren_string = input("Enter a string of parentheses (separated by spaces): ")
        if all(c in ['(', ')'] for c in paren_string):
            break
        print("Invalid input. Try again.")

    paren_string = ' '.join(paren_string.split())
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            if temp:
                result.append(temp)
                temp = ''
        elif char in ['(', ')']:
            if char == '(':
                temp += char
            else:
                while temp and (temp[-1] != '('):
                    result.append(temp[:-1])
                    temp = temp[:-1].rstrip()
                if temp and temp[-1] == '(':
                    temp += char
                elif not temp:
                    temp += char

    if temp:
        result.append(temp)

    return result