import re
def words_string(s):
    return re.split('?, |\s*,\s*|\s+|,\s*', s.strip())