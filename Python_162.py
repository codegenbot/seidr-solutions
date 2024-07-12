import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def main():
    text = input("Enter a string to calculate MD5 hash: ")
    if not text:
        print("Input string cannot be empty.")
    else:
        md5_hash = string_to_md5(text)
        print("MD5 hash value:", md5_hash)

if __name__ == "__main__":
    main()