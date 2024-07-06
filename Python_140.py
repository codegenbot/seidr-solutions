import sys


def fix_spaces(text):
    import re

    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")


user_input = sys.stdin.readline().strip()
result = fix_spaces(user_input)
sys.stdout.write(f"{result}\n")