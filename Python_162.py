import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    print(hashlib.md5(text.encode()).hexdigest())

string_to_md5()