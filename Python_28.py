from typing import List


def concatenate():
    strings = []
    
    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")
        
        if user_input.lower() == 'stop':
            break
        
        strings.append(user_input)
    
    return "".join(strings)

print(concatenate())