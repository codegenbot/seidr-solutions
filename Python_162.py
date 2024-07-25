import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    text = input("Enter text to convert to MD5: ").strip()
    result = string_to_md5(text)
    print(result)
except Exception as e:
    print("Error occurred while processing input:", e)