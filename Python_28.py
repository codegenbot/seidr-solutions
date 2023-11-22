from typing import List

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

strings = ['Hello', 'World']
result = concatenate(strings)
print(result)