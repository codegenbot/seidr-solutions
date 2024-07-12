```
import re

def process_digits():
    result = []
    while True:
        user_input = input("Please enter a digit: ")
        if re.match(r'\d+', user_input.lower()) is None and user_input.lower() != 'stop':
            print("Invalid input. Please enter digits or type 'stop' to finish.")
        elif user_input.lower() == 'stop':
            break
        result.append(user_input)
    return result

print("Enter digits (or 'stop' to finish).")
print(process_digits())