import hashlib

def string_to_md5(text):
    try:
        text = text.strip()
        if not text:
            return None
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        return str(e)  # Return error message for invalid input.