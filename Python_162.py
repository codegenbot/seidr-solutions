import hashlib

def string_to_md5():
    text = ""
    while True:
        line = input()
        if line == "":
            break
        text += line + "\n"
    return hashlib.md5(text.strip().encode()).hexdigest()