from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string))]

input_string = input("Enter a string: ")
while not input_string.strip():
    print("Empty input. Please enter a non-empty string.")
    input_string = input("Enter a string: ")

result = all_prefixes(input_string)
print(result)