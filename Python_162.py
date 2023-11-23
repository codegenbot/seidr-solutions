import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""

text = ""
while True:
    line = input()
    if not line:
        break
    text += line + "\n"

result = string_to_md5(text)

print(result)