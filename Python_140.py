```
import re
def replace_spaces(text):
    return re.sub(r"\s+", "_", text)