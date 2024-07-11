```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter some text: ")
        if text and text.isprintable():  
            return hashlib.md5(text.encode('utf-8')).hexdigest()
        else:
            print("Invalid input. Please enter printable characters.")

while True:
    result = string_to_md5()
    if result != "4c5d2b0f77c4cd0e1fe7aeb311a3a4ed":
        break
print(result)