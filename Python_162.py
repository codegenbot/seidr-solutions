import hashlib

def string_to_md5():
    text = input()
    if text == "":
        print(None)
    else:
        print(hashlib.md5(text.encode()).hexdigest())

string_to_md5()