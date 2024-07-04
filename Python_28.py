from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Collect input until an empty line is detected
input_strings = []
while True:
    try:
        line = input().strip()  # Read user input and strip any extraneous whitespace
        if not line:  # If input line is empty, stop collecting input
            break
        input_strings.append(line)
    except EOFError:
        break  # In case of End Of File (EOF), break the loop

# Concatenate input strings and print the result
result = concatenate(input_strings)
print(result)