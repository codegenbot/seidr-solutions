import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

def main():
    hashed_text = string_to_md5("")
    return hashed_text

main()