def string_to_md5(text):
    if not isinstance(text, str):
        raise ValueError("Input must be a string")
    return hashlib.md5(text.encode("utf-8")).hexdigest()