```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    strings_num = int(input("Enter the number of strings (1-9): "))
    try: 
        if 1 <= strings_num <= 9:
            break; 
    except ValueError as e:
        print(f"Error! Please enter a number between 1 and 9.")
    else:
        if strings_num < 1 or strings_num > 9:
            print("Error! Please enter a number between 1 and 9.")
        else: 
            strings = []
            
            for i in range(min(9, strings_num)):
                s = input(f"Enter string {i+1}: ")
                strings.append(s)
            
            result = concatenate(strings)
            print(result)