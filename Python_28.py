```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

if __name__ == '__main__':
    user_input = input().split()
    print(concatenate(user_input))

print(concatenate(['hello', 'world']))