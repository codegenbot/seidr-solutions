from typing import List

def concatenate(strings: List[str]) -> str:
    result = '\n'.join(strings)
    return result

if __name__ == '__main__':
    input_strings = [input() for _ in range(5)]
    output = concatenate(input_strings)
    print(output)