import hashlib

def string_to_md5():
    while True:
        text = input("Enter some text: ")
        if text.isprintable():  
            return hashlib.md5(text.encode('utf-8')).hexdigest()
        else:
            print("Invalid input. Please enter printable characters.")

result = string_to_md5()
print(result)