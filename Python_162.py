import hashlib

def string_to_md5(text):
    if not text.strip():
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    try:
        text = input("Enter text: ").strip()
        result = string_to_md5(text)
        if result:
            print(result)
        else:
            print("No valid input received.")
    except EOFError:
        print("No input received.")