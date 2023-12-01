import hashlib

def string_to_md5():
    try:
        text = input()
        if text == "":
            return None
        else:
            return hashlib.md5(text.encode()).hexdigest()
    except EOFError:
        return None

print(string_to_md5())