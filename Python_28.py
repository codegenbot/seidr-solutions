```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    num_strings = int(input("Enter the number of strings: "))
    strings = []
    
    for i in range(num_strings):
        s = input(f"Enter string {i+1}: ")
        strings.append(s)
    
    user_input = input("Do you want to see concatenated string? (y/n): ")
    if user_input.lower() == 'y':
        result = concatenate(strings)
        print(result)