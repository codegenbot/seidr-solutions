import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def main():
    user_input = input("Enter a string to calculate its MD5 hash: ")
    
    if not user_input:
        print("Input cannot be empty. Please provide a valid input.")
    else:
        result = string_to_md5(user_input)
        print("MD5 hash value:", result)

if __name__ == "__main__":
    main()