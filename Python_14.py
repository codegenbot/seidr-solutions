from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string))

input_string = input("Enter a string: ").strip()
while not input_string:
    print("No input received or empty input. Please enter a string.")
    input_string = input("Enter a string: ").strip()

result = all_prefixes(input_string)
print(result)