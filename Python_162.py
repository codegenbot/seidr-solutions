import hashlib


def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    text = input("Enter a string: ")
    result = string_to_md5(text)
    
    print("MD5 Hash:", result)