```
def check():
    prefix = input("Enter a prefix (e.g., 'abc'): ")
    if not isinstance(prefix, str):
        print("Program did not receive expected input")
    elif len(prefix) > 5:
        print("Prefix is too long")
    else:
        print("Prefix is fine")
check()