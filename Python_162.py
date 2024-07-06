
def string_to_md5(text):
    import hashlib
    if text == '':
        return None
    else:
        return hashlib.md5(text.encode('utf-8')).hexdigest()