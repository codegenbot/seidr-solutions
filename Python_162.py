import hashlib

def string_to_md5():
    name = input("Enter your name: ")
    if not name:
        return None
    return hashlib.md5(name.encode()).hexdigest()

result = string_to_md5()
print(result)