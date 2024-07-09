while True:
    text = input("Please enter some text: ")
    if text:
        print(hashlib.md5(text.encode()).hexdigest())
        break