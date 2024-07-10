```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter some text: ")
        try:
            return hashlib.md5(text.encode('utf-8')).hexdigest()
        except Exception as e:
            print(f"Error: {str(e)}. Please enter valid text.")

result = string_to_md5()
print(result)