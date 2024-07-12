import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def main():
    user_input = input("Enter a string to calculate MD5 hash: ")
    
    if user_input:
        result = string_to_md5(user_input)
        print(result)
    else:
        print("Invalid input, please enter a non-empty string.")


main()