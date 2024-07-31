```
import re
from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Enter the strings: ")
    return ''.join([s.strip() for s in re.split(r'\W+', user_input)])