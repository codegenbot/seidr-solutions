
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text)

if __name__ == "__main__":
    text = input("Enter a sentence with spaces: ")
    print(fix_spaces(text))