import hashlib

def string_to_md5(text):
    if text:
        try:
            return hashlib.md5(str(text).encode()).hexdigest()
        except Exception as e:
            return str(e)
    else:
        return None