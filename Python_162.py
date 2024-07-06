import hashlib


def string_to_md5():
    text = input("Enter your string: ")
    if text:
        confirm = input("Do you want to continue? (yes/no): ")
        if confirm.lower() == "yes":
            return hashlib.md5(text.encode()).hexdigest()
        else:
            return None
    else:
        return None


print(string_to_md5())