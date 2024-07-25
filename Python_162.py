import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

while True:
    try:
        text = input("Enter the text: ").strip()
        if not text:
            raise ValueError("Input text cannot be empty")
        result = string_to_md5(text)
        print(result)
        break
    except:
        continue