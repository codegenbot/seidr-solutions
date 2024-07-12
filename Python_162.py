```
import hashlib

def string_to_md5(text):
    if text == "":
        return None
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        return str(e)