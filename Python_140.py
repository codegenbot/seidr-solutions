```
import re


def solve(text):
    try:
        return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)
    except Exception as e:
        print(f"An error occurred: {e}")
        return None


text = input("Enter your name or title (for example, John Doe): ")
print(solve(text))