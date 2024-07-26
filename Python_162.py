def string_to_md5(text):
    if text == '':
        return None
    else:
        import hashlib
        return hashlib.md5(text.encode()).hexdigest()