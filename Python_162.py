while True:
    text = input("Enter your string: ")
    confirm = input("Do you want to continue? (yes/no): ")
    if text and confirm.lower() == 'yes':
        return hashlib.md5(text.encode()).hexdigest()
    elif confirm.lower() != 'yes' or not text:
        print("Please try again.")