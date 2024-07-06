from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        user_input = input("Enter some strings separated by commas, or 'q' to quit: ")
        if user_input.lower() == 'q':
            break
        try:
            strings_list = [s.strip() for s in user_input.split(',')]
            print(concatenate(strings_list))
        except ValueError:
            print("Invalid input. Please enter some strings separated by commas.")