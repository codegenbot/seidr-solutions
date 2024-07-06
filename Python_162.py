import hashlib


def string_to_md5():
    while True:
        text = input("Enter your string: ").strip()
        confirm = input("Do you want to continue? (yes/no): ").lower()
        if not text or confirm not in ["yes", "no"]:
            print("Invalid response. Please enter 'yes' or 'no'.")
        else:
            break
    return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())