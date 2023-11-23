from hashlib import md5

def string_to_md5(text):
    return md5(text.encode()).hexdigest()

text = input().rstrip()
while text:
    result = string_to_md5(text)
    print(result)
    text = input().rstrip()