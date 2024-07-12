```
import re

def solve(text):
    if not isinstance(text, str):
        return "Invalid input type"
    
    return re.sub(r" +", "_", text.title())

text = "Enter your name or title: "
user_input = input(text)
print(solve(user_input))