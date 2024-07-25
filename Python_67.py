import re
def fruit_distribution(s):
    s = s.lower()
    if re.search("and", s):
        return "mixed"
    else:
        return "unknown"