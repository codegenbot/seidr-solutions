import hashlib

def string_to_md5():
    text = input("Please enter some text: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

print(f"{' '.join(map(str, string_to_md5().splitlines()))}")