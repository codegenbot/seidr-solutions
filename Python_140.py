import re

def fix_spaces(text):
    text = input("Enter a string: ")
    return re.sub(r"\s+", "-", text)

if __name__ == "__main__":
    fix_spaces(input())