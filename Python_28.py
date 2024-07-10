from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

if __name__ == '__main__':
    strings = input().split()
    print(concatenate(strings))

print(concatenate(['hello', 'world']))