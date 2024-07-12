def string_to_md5(input_str):
    if not isinstance(input_str, str):
        return "Error: Input must be a string."
    if not input_str:
        return None
    return hashlib.md5(input_str.encode()).hexdigest()