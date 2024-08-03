import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    text = input().strip()
    if text:
        print(string_to_md5(text))
    else:
        raise ValueError("Input is empty")
except Exception as e:
    print("Error:", e)