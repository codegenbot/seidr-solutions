```
import re
def words_string(s):
    return [word.strip().capitalize() for word in re.split(r'\W+', s)]