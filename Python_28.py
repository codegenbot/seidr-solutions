from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read multiple lines input from the user
input_strings = []
while True:
    try:
        line = input()
        if line == "":
            break
        input_strings.append(line)
    except EOFError:
        break

result = concatenate(input_strings)
print(result)