```
import re
def fix_spaces(text):
    return re.sub(r'(\s)+', lambda x: '-', text).replace('_', '__')