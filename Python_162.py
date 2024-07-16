import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    try:
        input_text = input("Enter a string: ").strip()
        if input_text:
            result = string_to_md5(input_text)
            print(result)
        else:
            print("Invalid input")
    except KeyboardInterrupt:
        break
    except EOFError:
        break