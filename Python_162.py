import hashlib

print("Please enter some text (alphanumeric characters only): ", end="")
while True:
    try:
        s = input()
        if not s.isalnum():
            print("Invalid input. Please enter alphanumeric characters only.")
        else:
            output = hashlib.md5(s.encode()).hexdigest()
            if output:
                print(f"Output: {output}")
                break
    except Exception as e:
        print(f"An error occurred: {str(e)}")