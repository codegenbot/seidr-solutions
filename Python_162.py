import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

while True:
    try:
        text = input("Enter a string: ")
        if text:
            print(string_to_md5(text))
            break
        else:
            print("Please provide a string.")
    except EOFError:
        print("No input provided.")
    except ValueError:
        print("Invalid input format. Please provide a valid string.")