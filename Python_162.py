```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string: ")
    try:
        if not text.isprintable(): 
            raise ValueError("Invalid input")
        print(string_to_md5(text))
    except TypeError as e:
        print(f"Invalid input. Please enter a string: {e}")