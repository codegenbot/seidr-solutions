from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string))]

while True:
    input_string = input("Enter a string: ")
    if input_string:
        result = all_prefixes(input_string)
        print(result)
        break
    else:
        print("No input received. Please enter a string.")