```
import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    try:
        if isinstance(text, str):
            return hashlib.md5(text.encode()).hexdigest()
        else:
            return "Invalid input. Please enter a string."
    except Exception as e:
        return f"An error occurred: {str(e)}"

print(string_to_md5())