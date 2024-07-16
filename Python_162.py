import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

print("Please enter a string to calculate its MD5 hash:")
while True:
    input_text = input().strip()
    if not input_text or input_text == '':
        print("Input should not be empty. Please enter a valid string.")
    else:
        result = string_to_md5(input_text)
        print(result)