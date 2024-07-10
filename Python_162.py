```
def string_to_md5():
    text = input("Enter some text: ")
    if not text:
        return None
    hashed_text = hashlib.md5(text.encode()).hexdigest()
    return hashed_text

result = string_to_md5()
print(result)