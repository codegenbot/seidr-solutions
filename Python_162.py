```Python
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if __name__ == "__main__":
    while True:
        user_input = input("Enter a string or 'exit' to quit: ")
        if user_input.lower() == 'exit':
            break
        print(string_to_md5(user_input))