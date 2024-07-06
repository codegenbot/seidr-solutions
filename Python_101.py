```
import re

def words_string():
    s = input("Please enter a string with comma-separated values: ")
    if not s:
        return []  
    try:
        return re.split('?, |\s*,\s*|\s+|,\s*', s.strip())
    except Exception as e:
        print(f"Invalid input. Please enter valid text.")
        return []

print(words_string())