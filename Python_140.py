```
import re
def fix_spaces(text):
    return re.sub(r'\s+', '-', text).replace('_','_')