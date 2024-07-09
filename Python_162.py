import hashlib


def string_to_md5():
    while True:
        text = input("Please enter some text (or 'stop' to finish): ")
        if text.lower() == 'stop':
            break
        if not text:
            return None
        return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())