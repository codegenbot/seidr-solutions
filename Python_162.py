import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

while True:
    try:
        text = input("Enter a string: ")
        if not text:
            print("Please provide a string.")
            continue
        print(string_to_md5(text))
        break
    except EOFError:
        break