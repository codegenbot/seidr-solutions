from typing import List

def concatenate() -> str:
    user_input = input("Enter words separated by space: ")
    if not user_input:
        return "No input provided"
    result = ", ".join([word for word in user_input.split(" ")])
    return result

print(concatenate())