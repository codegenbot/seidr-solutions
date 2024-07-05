import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    try:
        text = input().strip()
        if text:
            result = string_to_md5(text)
            print(result)
        else:
            print("No input received.")
    except EOFError:
        print("No input received.")