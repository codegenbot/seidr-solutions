```
import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    confirm = input("Do you want to continue? (yes/no): ")
    if not text.strip() or not confirm:
        return "Program did not receive expected input"
    if confirm.lower() == 'yes':
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

print(string_to_md5())