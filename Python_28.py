from typing import List


def concatenate(strings: List[str]) -> str:
    result = ' '.join(map(str, filter(None, strings)))
    for i in range(len(result.split()) - 1):
        if result.split()[i].lower() == result.split()[i+1].lower():
            result = result.replace(' ' + result.split()[i+1], '')
    return result