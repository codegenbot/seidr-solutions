import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Receiving input as a single line of input
text = input()
result = string_to_md5(text)
print(result)