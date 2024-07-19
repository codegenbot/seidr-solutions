import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    while True:
        try:
            input_text = input()
            if input_text:
                result = string_to_md5(input_text)
                print(result)
            else:
                print("Input text is empty.")
        except EOFError:
            break
except KeyboardInterrupt:
    pass