import hashlib

def string_to_md5():
    while True:
        text = input("Enter your string: ").strip()
        confirm = input("Do you want to continue? (yes/no): ").lower()
        if text and confirm in ['yes', 'no']:
            break
    if not text or confirm != 'yes':
        return None
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())