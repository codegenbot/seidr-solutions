import hashlib

def string_to_md5():
    try:
        text = input("Enter a string: ")
        if not text:
            return None
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        print(f"Error occurred: {str(e)}")
        return None