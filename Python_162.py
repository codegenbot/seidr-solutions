import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        text = input("Enter a string (or 'stop' to exit): ")
        if text.lower() == 'stop':
            break
        if text:
            print(string_to_md5(text))
        else:
            print("Invalid input. Please enter a string.")