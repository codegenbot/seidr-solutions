def check():
    prefix = input("Enter a prefix: ")
    if len(prefix) > 5:
        print("Prefix is too long")
    else:
        print("Prefix is fine")
check()