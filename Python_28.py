from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''.join(strings)
    return result

if __name__ == '__main__':
    input_strings = []
    while True:
        try:
            input_string = input().strip()
            if input_string:
                input_strings.append(input_string)
            else:
                break
        except EOFError:
            break
    
    output = concatenate(input_strings)
    print(output)