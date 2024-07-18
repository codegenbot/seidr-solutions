import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    text = input("Enter a string: ").strip()
    if text:
        break
    print("Please enter a valid string.")

result = string_to_md5(text)
print(result)