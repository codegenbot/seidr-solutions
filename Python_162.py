def string_to_md5(text):
    if text:
        import hashlib
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None