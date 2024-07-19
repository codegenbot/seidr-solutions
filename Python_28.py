from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''
    for s in strings:
        if s.startswith('http'):
            continue
        if len(s) > 10:
            s = s[:10] + '...'
        result += s + '\n'
    return result