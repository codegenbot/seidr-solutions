```Python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        print(f"An error occurred: {str(e)}")
        return None