import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    try:
        text = input().strip()
    except EOFError:
        text = ""
    print(string_to_md5(text))