from typing import List


def concatenate():
    strings = []
    while True:
        user_input = input("Enter a string (or 'stop' if done): ")
        if user_input.lower() == 'stop':
            break
        strings.append(user_input)
    
    result = ""
    for string in strings:
        result += string
    return result

print(concatenate())