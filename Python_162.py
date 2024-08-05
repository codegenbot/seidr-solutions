import hashlib

def string_to_md5():
    text = input("Enter the text to hash: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Call the function to get the hashed text
hashed_text = string_to_md5()
print(hashed_text)