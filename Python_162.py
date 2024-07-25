import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a non-empty text: ").strip()
while len(text) < 1:
    print("Input text must contain at least one character")
    text = input("Enter a non-empty text: ").strip()

result = string_to_md5(text)
print(result)