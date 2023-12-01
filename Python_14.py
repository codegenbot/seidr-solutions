from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

# Prompt user for input using eval(input()) instead of input()
input_string = eval(input("Enter a string: "))

# Call the function with the input string and print the result
print(all_prefixes(input_string))