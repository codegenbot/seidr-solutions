```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    
    while True:
        paren_string = input("Enter a string of parentheses (separated by spaces): ")
        if all(c in ['(', ')'] for c in paren_string):
            break
        print("Invalid input. Try again.")

    paren_string = ' '.join(paren_string.split())
    
    while len(paren_string) > 0:
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
            else:
                temp += char
        paren_string = paren_string.lstrip().rstrip()
        while len(paren_string) > 0 and paren_string[0] in ['(', ')']:
            result.append(paren_string[0])
            paren_string = paren_string[1:].lstrip().rstrip()

    if temp:
        result.append(temp)

    return result

def main():
    print(separate_paren_groups(input("Enter a string of parentheses (separated by spaces): ")))

if __name__ == "__main__":
    main()