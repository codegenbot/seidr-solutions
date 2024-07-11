```
from typing import List


def concatenate():
    num_strings = 0
    strings = []
    
    while True:
        user_input = input("Enter a string ('stop' to finish): ")
        
        if user_input.lower() == 'stop':
            break
        
        strings.append(user_input)
        
    return "".join(strings)