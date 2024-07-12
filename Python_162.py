```
while True:
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input().strip()

    while not s.isalnum():
        if not s:
            continue
        print("Please enter some alphanumeric characters.")
        print("Try again: ", end="")
        s = input().strip()

    break

print(f"Output: {hashlib.md5(s.encode()).hexdigest()}"