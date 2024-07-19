```python
# Task: Check if all substrings of length 3 in a string s have unique characters.
# Function signature: def is_happy(s):
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(set(chunk)) != 3:
            return False
    return True