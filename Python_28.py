```
from typing import List


def concatenate(strings: List[str]) -> str:
    return " ".join(strings)


strings_list = []
while True:
    try:
        user_input = input("Enter a string (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        strings_list.append(user_input.strip())
    except ValueError:
        print("Invalid input. Please enter a string or 'stop'.")

if strings_list:
    result = concatenate(strings_list)
    print(result)
else:
    print("No strings were provided.")