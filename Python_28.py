```
from typing import List

def concatenate() -> str:
    user_input = input("Enter words separated by space: ")
    if not user_input:
        return 
    result = ", ".join(user_input.split(' '))
    return result

print(concatenate())