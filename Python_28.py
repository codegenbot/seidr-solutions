from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = []
while True:
    try:
        line = input()
        if line:
            input_strings.append(line)
        else:
            break
    except EOFError:
        break

result = concatenate(input_strings)
print(result)