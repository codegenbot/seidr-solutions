```
import hashlib

def ab79b371_cf64_4a96_bd51_8b13c8e367b0():
    while True:
        text = input("Please enter a string (or 'q' to quit): ")
        if text.lower() == "q":
            break
        try:
            result = hashlib.md5(text.encode()).hexdigest()
            print(result)
        except Exception as e:
            print(f"Error: {e}")