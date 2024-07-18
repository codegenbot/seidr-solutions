from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string)]

print("Enter a string: ")
input_string = input()
if input_string.strip():
    result = all_prefixes(input_string)
    print(result)
else:
    print("No input received or empty input. Please enter a string.")