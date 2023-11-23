from hashlib import md5

def string_to_md5(text):
    return md5(text.encode()).hexdigest()

while True:
    text = input()
    if text == "":
        break
    result = string_to_md5(text)
    print(result)