```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        try:
            text = input("Enter a string (or 'q' to quit): ").lower()
            if text == 'q':
                break
            print(string_to_md5(text))
        except Exception as e:
            print(f"Error: {str(e)}")