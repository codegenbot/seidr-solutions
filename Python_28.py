```
from typing import List

user_input = input("Enter some strings (space-separated): ")
def concatenate(strings: List[str] = []) -> str:
    return "".join([s.strip() for s in strings]).strip()
print(concatenate(user_input.split()))