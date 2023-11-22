import hashlib

def string_to_md5():
    text = ""
    while True:
        line = input()
        if line == "":
            break
        text += line + '\n'
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()