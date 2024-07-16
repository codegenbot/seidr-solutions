import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    try:
        input_text = input("Enter a string: ").strip()
    except (KeyboardInterrupt, EOFError):
        break
    if not input_text:
        break
    result = string_to_md5(input_text)
    print(result)