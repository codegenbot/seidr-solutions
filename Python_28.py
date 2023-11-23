from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''.join(strings)
    return result

if __name__ == '__main__':
    input_strings = raw_input("Enter a list of strings separated by commas: ").strip().split(',')
    output = concatenate(input_strings)
    print(output)