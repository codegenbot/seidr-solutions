import hashlib

def string_to_md5():
    text = None
    while not text:
        try:
            text = input("Please enter some text: ")
        except ValueError:
            print("Invalid input, please try again!")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())