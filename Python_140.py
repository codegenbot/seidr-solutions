import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")


if __name__ == "__main__":
    user_input = input()
    result = fix_spaces(user_input)
    print(result)