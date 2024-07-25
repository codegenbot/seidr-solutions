import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    if len(sys.argv) != 2:
        raise ValueError("Exactly one argument should be provided")
    text = sys.argv[1].strip()
    if not text:
        raise ValueError("Input text cannot be empty")
    result = string_to_md5(text)
    print(result)
except ValueError as ve:
    print("Error: Invalid input -", ve)
except Exception as e:
    print("Error occurred while processing input:", e)