```Python
import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    if text.isalnum(): 
        return hashlib.md5(text.encode()).hexdigest()
    print("Invalid input. Please enter only alphanumeric characters.")
    return None

if __name__ == "__main__":
    while True:
        result = string_to_md5()
        if result is not None:
            print(result)