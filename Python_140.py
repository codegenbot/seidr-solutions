```
import re
def fix_spaces(*text):
    return '_'.join(map(str, filter(None, text)))