```
from typing import List

def concatenate():
    user_input = input("Enter some strings (separated by space or comma): ")
    
    # Split the input string based on space or comma
    strings = [s.strip() for s in user_input.split(",") if s]
    
    return ''.join(strings)

print(concatenate())