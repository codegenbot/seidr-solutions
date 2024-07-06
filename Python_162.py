import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except TypeError:
        return "Error: Please enter a valid string."

print(string_to_md5())