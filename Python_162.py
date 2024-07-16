import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    while True:
        try:
            try:
                input_text = input("Enter a string: ").strip()
            except StopIteration:
                break
        except EOFError:
            break
        if not input_text:
            print("Invalid input")
            continue
        result = string_to_md5(input_text)
        print(result)
except KeyboardInterrupt:
    pass