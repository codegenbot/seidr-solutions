while True:
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input().strip()

    if not s:
        print("Input cannot be empty. Try again!")
        continue

    if not s.isalnum():
        print("Invalid input! Please try with alphanumeric characters.")
        continue
    break

print(f"Output: {hashlib.md5(s.encode()).hexdigest()}"