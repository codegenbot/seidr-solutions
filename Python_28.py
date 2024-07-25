```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    if not 1 <= num_strings := int(input("Enter the number of strings (1-9): ") or 1) <= 9:
        while True:
            num_strings = int(input("Enter the number of strings (1-9): ") or 1)
            if 1 <= num_strings <= 9:
                break
    print("Error! Please enter a number between 1 and 9.")
    else:
        strings = []
        
        for i in range(num_strings):
            s = input(f"Enter string {i+1}: ")
            strings.append(s)
        
        result = concatenate(strings)
        print(result)