```
import re
def words_string():
    s = input("Please enter a string: ")
    try:
        return [word.strip().capitalize() for word in re.split(r'\W+', s)]
    except AttributeError:
        return [word.strip().capitalize() for word in re.split(r'\W+', str(s))]