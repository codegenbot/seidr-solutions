import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter text: ").strip()
    if text:
        print(string_to_md5(text))
    else:
        print("No input received.")