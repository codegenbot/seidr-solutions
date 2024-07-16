import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    try:
        input_text = input().strip()
    except (KeyboardInterrupt, EOFError, ValueError):
        break
    result = string_to_md5(input_text)
    print(result)