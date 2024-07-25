```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    strings_num = int(input("Enter the number of strings (1-9): "))

    if not 1 <= strings_num <= 9:
        print("Error! Please enter a number between 1 and 9.")
    else: 
        strings = []

        for i in range(min(9, strings_num)):
            while True:
                s = input(f"Enter string {i+1}: ")
                if not s.isprintable(): # check if the input contains only printable characters
                    print("Error! Please enter a valid string.")
                else: 
                    strings.append(s)
                    break
        
        result = concatenate(strings)
        print(result)