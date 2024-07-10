```
import re


def fix_spaces(text):
    if not text:  
        return ""
    else:
        return re.sub(" +", lambda x: "_" if len(x.group()) == 1 else " - ", text).replace(
            "- -", "- "
        )