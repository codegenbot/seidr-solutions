```python
import hashlib


def string_to_md5():
    text = input("Please enter some text: ")
    if not text:
        return None
    option = int(input("Choose an option (0 for hexadecimal or 1 for binary): "))
    
    if option == 0:
        return hashlib.md5(text.encode()).hexdigest()
    elif option == 1:
        return hashlib.md5(text.encode()).hexdigest().encode('ascii', 'replace')
    else:
        return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())