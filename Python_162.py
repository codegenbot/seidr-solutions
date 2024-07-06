import hashlib


def string_to_md5():
    text = ''
    confirm = ''
    while not text or not confirm.lower() in ["yes", "no"]:
        text = input("Enter your string: ").strip()
        confirm = input("Do you want to continue? (yes/no): ").lower()
    return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())