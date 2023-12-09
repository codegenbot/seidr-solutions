```
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text)

# Prompt user for input
user_input = input("Enter some text: ")

# Call the fix_spaces() function with the user's input
result = fix_spaces(user_input)

# Print the result to the console
print(result)
```