```
import hashlib

def string_to_md5(text):
    if not text:
        return "" 
    return "" if text == "" else hashlib.md5(text.encode('utf-8')).hexdigest()

print("Enter 'quit' to stop.")
while True:
    try:
        text = input("Enter a string: ")
        if text.lower() == "quit":
            break
        print(string_to_md5(text))
    except ValueError as e:
        print(f"Invalid input. Please enter a string. {e}")