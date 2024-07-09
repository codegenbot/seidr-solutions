import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string to convert to MD5: ")
    result = string_to_md5(text)
    if result:
        print("MD5 hash:", result)
    else:
        print("Input string is empty")