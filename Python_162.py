import hashlib

def string_to_md5():
    while True:
        text = input("Enter some text (or press Enter to quit): ")
        if not text:
            break
        print(hashlib.md5(text.encode()).hexdigest())

string_to_md5()