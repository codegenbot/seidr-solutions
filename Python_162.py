import hashlib


def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()


text = input("Enter a string: ").strip()
while not text:
    text = input("Please provide a string: ").strip()

print(string_to_md5(text))