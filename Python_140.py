import re


def fix_spaces(text):
    text = re.sub(r"\s+", "-", text)
    return text


if __name__ == "__main__":
    print("The string after correcting spaces: ", fix_spaces(""))