```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        try:
            text = input("Enter a string: ")
            break
        except ValueError:
            print("Invalid input. Please enter a valid string.")
    
    result = string_to_md5(text.lower())
    print(result)