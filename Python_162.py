import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None

if __name__ == "__main__":
    while True:
        try:
            user_input = input()
            result = string_to_md5(user_input)
            print("MD5 hash of the input string is:", result)
        except EOFError:
            break