from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = []
while True:
    line = input().strip()
    if not line:
        break
    input_strings.append(line)

result = concatenate(input_strings)
print(result)