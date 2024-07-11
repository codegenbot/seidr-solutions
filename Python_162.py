def string_to_md5(text):
    if not text:
        return None
    if isinstance(text, bytes):  
        text = text.decode('utf-8')  
    return hashlib.md5(text.encode('utf-8')).hexdigest()