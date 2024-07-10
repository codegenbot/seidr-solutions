```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

if __name__ == '__main__':
    try:
        n = int(input("Enter number of strings: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
        exit()
    strings = []
    for _ in range(n):
        user_input = input()
        strings.append(user_input)
    print(concatenate(strings))
    print(concatenate(['hello', 'world']))