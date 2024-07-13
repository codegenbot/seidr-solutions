import hashlib

def string_to_md5(text):
    if not text.isalnum():
        return "Invalid input. Please enter only alphanumeric characters."
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        text = input("Enter a string: ")
        result = string_to_md5(text)
        print(result)