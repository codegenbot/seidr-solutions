import hashlib

def string_to_md5():
    while True:
        try:
            text = input("Enter some text (or 'q' to quit): ")
            if text.lower() == 'q':
                return None
            elif text.isprintable():  
                return hashlib.md5(text.encode('utf-8')).hexdigest()
            else:
                print("Invalid input. Please enter printable characters.")
        except AttributeError:
            print("Error: Please enter a string.")

result = string_to_md5()
if result is not None:
    print(result)