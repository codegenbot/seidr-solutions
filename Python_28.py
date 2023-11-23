from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''.join(strings)
    return result

if __name__ == '__main__':
    n = int(input())
    input_strings = [input() for _ in range(n)]
    output = concatenate(input_strings)
    print(output)