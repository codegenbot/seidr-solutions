from typing import List

def concatenate():
    strings = []
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        strings.append(s)
    
    return "".join([s.strip() for s in strings]).strip()

print(concatenate())