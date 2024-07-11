def string_to_md5():
    text = None
    while text is None or not text.strip():
        text = input("Please enter a string: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()