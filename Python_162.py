import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

while True:
    text = input()
    if text == "":
        break
    result = string_to_md5(text)
    print(result)