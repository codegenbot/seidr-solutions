from typing import List


def concatenate(strings: List[str]) -> str:
    result = ''
    while True:
        s = input('Enter string (or "stop" if you are finished): ')
        if s.lower() == 'stop':
            break
        result += s + ' '
    return result.strip()