import re


def fix_spaces(text):
    text = re.sub(r"\s+", " ", text)
    return re.sub(r" +$", "", re.sub(r"^  ", "", text)).strip()