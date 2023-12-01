import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

while True:
    try:
        text = input("Enter a string: ")
        md5_hash = string_to_md5(text)
        break
    except Exception as e:
        print("Invalid input. Please try again.")

print(md5_hash)