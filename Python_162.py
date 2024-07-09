import hashlib

def string_to_md5(text):
    if text is not None:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if __name__ == "__main__":
    with open('input.txt', 'r') as file:
        text = file.read().strip()
    print(string_to_md5(text))