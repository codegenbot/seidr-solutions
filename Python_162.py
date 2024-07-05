import hashlib

def string_to_md5(text):
    if text.strip() == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input().strip()
    result = string_to_md5(text)
    if result is not None:
        print(result)