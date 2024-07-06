import hashlib


def string_to_md5():
    while True:
        text = input("Enter your string: ")
        confirm = input("Do you want to continue? (yes/no): ")
        if text and confirm.lower() == "yes":
            return hashlib.md5(text.encode()).hexdigest()
            break
        elif confirm.lower() != "no":
            print("Invalid choice. Please enter yes or no.")
    else:
        return None


print(string_to_md5())