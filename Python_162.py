import hashlib

def string_to_md5():
    if not input("Enter a text: "):
        return None
    return hashlib.md5(input().encode()).hexdigest()