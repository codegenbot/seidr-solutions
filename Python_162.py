import hashlib

def string_to_md5():
    text = input("Enter the text to convert to MD5 hash: ")
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == '__main__':
    print(string_to_md5())