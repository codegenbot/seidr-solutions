```
import re

def words_string(s):
    return re.sub(r'\s+', ', ', s).split(", ")