import hashlib

def string_to_md5():
    name = input("Please enter your name: ")
    text = input("Please enter some text ({}):".format(name))
    if text:
        return hashlib.md5((name + text).encode()).hexdigest()
    else:
        return None