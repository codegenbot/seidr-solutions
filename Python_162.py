import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    if text:
        print(hashlib.md5(text.encode()).hexdigest())
    else:
        print("Input string is empty")

string_to_md5()