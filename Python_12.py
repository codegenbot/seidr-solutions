from typing import Optional

def longest() -> Optional[str]:
    max_length = 0
    result = ''
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        if len(s) > max_length:
            max_length = len(s)
            result = s
    return result