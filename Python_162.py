def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode('utf-8')).hexdigest()

print("Enter 'quit' to stop.")
while True:
    try:
        text = input("Enter a string: ")
        if text.lower() == "quit":
            break
        print(string_to_md5(text))
    except ValueError:
        print("Invalid input. Please enter a string.")