import re


def fix_spaces(text):
    return re.sub(" +", lambda x: "_" if len(x.group()) == 1 else " - ", text).replace(
        "- -", "- "
    )