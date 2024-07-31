from typing import List


def concatenate(strings: List[str]) -> str:
    result = " ".join(strings)
    return result

while True:
    user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    if user_input.lower() == 'q':
        break
    if not user_input:  
        print("Program did not receive expected input")
        continue  
    strings = user_input.split()
    print(concatenate(strings))