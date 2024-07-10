```
def string_to_md5():
    text = input("Enter some text: ")
    if not text:
        return None
    else:
        result = hashlib.md5(text.encode()).hexdigest()
        return result

print(string_to_md5())