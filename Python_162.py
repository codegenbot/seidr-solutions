def string_to_md5():
    text = input("Please enter some text: ")
    if text:
        md5_hash = hashlib.md5(text.encode()).hexdigest()
        print(md5_hash)
        return md5_hash
    else:
        return None