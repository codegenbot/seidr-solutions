```
import re

def fix_spaces(text):
    return re.sub(r'[_\s]+', ' ', text.replace("--", "-").replace("\n", "").replace("  ", " "))