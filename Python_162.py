```
import hashlib


def string_to_md5():
    text = "This is a test".strip()
    if not text:
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())