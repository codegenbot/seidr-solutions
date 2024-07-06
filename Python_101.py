import re

def words_string(s):
    if s:
        return re.split('?, |\s*,\s*|\s+|,\s*', s.strip())
    else:
        return None

input_str = input("Enter a string: ")
print(words_string(input_str))