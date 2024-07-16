import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text and isinstance(text, str) else None

while True:
    input_text = input("Enter a string: ")
    if isinstance(input_text, str):
        break
    else:
        print("Please enter a valid string.")

result = string_to_md5(input_text)
print(result)