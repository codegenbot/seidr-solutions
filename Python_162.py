while True:
    text = input("Enter some text: ")
    if text.strip():
        break
    return hashlib.md5(text.encode()).hexdigest()