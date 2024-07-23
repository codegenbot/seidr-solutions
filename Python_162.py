```
text = input()
if not text:
    return None
return hashlib.md5(text.encode()).hexdigest()