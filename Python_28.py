from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

user_input = input().split()
result = concatenate(user_input)
print(result)