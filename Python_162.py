Here is the modified code:

```
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Enter your text: ")
result = string_to_md5(text)
print(result)