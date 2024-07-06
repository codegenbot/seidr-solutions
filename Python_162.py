```Python
import hashlib

def string_to_md5():
    while True:
        text = input("Enter your string: ")
        confirm = input("Do you want to continue? (yes/no): ").lower()
        
        if not text.strip() or confirm not in ['yes', 'no']:
            print("Invalid input. Please enter a valid string and confirmation.")
        else:
            if confirm == 'no':
                return None
            else:
                return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())