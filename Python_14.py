from typing import List

def all_prefixes() -> List[str]:
    input_string = input("Enter a string: ")
    prefixes = []
    for i in range(len(input_string)):
        prefixes.append(input_string[:i+1])
    print(prefixes)

all_prefixes()