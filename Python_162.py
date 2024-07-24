def string_to_md5():
    """This function converts a user-provided text into an MD5 hash."""
    text = input("Please enter some text: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()