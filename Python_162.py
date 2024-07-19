import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = ''
while True:
    try:
        line = input()
    except EOFError:
        break
    input_text += line

result = string_to_md5(input_text)
print(result)