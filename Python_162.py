import hashlib

def string_to_md5():
    text = input("""Enter some text: 
""")
    if not text:
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())