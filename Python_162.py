```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def main():
    user_input = input("Enter a string: ")
    result = string_to_md5(user_input)
    print(result)

if __name__ == "__main__":
    main()