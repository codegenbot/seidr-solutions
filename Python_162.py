import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def main():
    text = input("Enter a string to calculate MD5 hash: ")
    if text:
        result = string_to_md5(text)
        print("MD5 hash value:", result)
    else:
        print("Invalid input. Please enter a non-empty string.")

if __name__ == "__main__":
    main()