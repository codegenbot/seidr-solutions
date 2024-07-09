while True:
    text = input("Please enter some text: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()