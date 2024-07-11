import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        print("Please enter a non-empty string.")
        return None