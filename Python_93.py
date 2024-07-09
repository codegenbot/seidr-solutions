```
import re

def encode(message):
    result = ""
    words = re.findall(r'\w+|[^\w\s]', message)
    for word in words:
        if word.lower() in 'aeiou':
            result += ''.join(chr((ord(c) - 97 + 2) % 26 + 97) if c.isalpha() else c for c in word)
        else:
            result += word.swapcase()
        result += " "
    return result.strip().lower()