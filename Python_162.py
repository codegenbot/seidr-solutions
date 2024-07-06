Here is the modified code:

```python
import hashlib

def string_to_md5():
    text = input("Enter your text (or 'stop' to quit): ")
    if text.lower() == 'stop':
        return None
    elif text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

while True:
    print(string_to_md5())