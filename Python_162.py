import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# get the input from the user in multiple lines
text = ""
while True:
    line = input()
    if line == "":
        break
    text += line + "\n"

result = string_to_md5(text.strip())
print(result)