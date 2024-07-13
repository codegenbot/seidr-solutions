def check():
    prefix = input("Enter a prefix: ")
    words = ["hello", "world", "python", "java"]
    if len(prefix) > 5:
        print("Prefix is too long")
    else:
        for word in words:
            if word.startswith(prefix):
                print(f"Found match: {word}")
check()