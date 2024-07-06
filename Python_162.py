def string_to_md5():
    text = ''
    confirm = ''

    while not (text and confirm.lower() in ["yes", "no"]):
        text = input("Enter your string: ").strip()
        if not text:
            print("Please enter a valid string.")
        else:
            confirm = input("Do you want to continue? (yes/no): ").lower()
            if confirm not in ["yes", "no"]:
                print("Invalid choice. Please choose 'yes' or 'no'.")
    return hashlib.md5(text.encode()).hexdigest()