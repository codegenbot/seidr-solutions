```
user_input = input("Enter some text: ")
import re

def fix_spaces(text):
    return re.sub(" +", lambda x: "_" if len(x.group()) == 1 else " - ", text).replace(
        "- -", "- "
    )

print(fix_spaces(user_input))