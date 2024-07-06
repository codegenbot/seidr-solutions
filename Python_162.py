import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    confirm = input("Do you want to continue? (yes/no): ")
    
    if confirm.lower() != 'yes':
        return
        elif not text:
            return "String is empty. Please provide a non-empty string."
        
    else:
        return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())