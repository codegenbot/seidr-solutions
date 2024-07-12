import hashlib

while True:
    try:
        print("Please enter some text (alphanumeric characters only): ", end="")
        s = input()
        if not s.isalnum():
            raise Exception("Invalid input.")
        break
    except Exception as e:
        print(f"Error: {str(e)}")
        continue
if not s:
    print("Please enter some alphanumeric characters.")
else:
    output = hashlib.md5(s.encode()).hexdigest()
    print(f"Output: {output}")