def string_to_md5():
    text = input("Enter some text: ").strip()
    if not text:
        text = "default_text"
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())