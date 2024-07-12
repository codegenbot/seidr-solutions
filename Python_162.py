```
import hashlib

print("Please enter some text (alphanumeric characters only): ", end="")
s = input()
if not s.strip().isalnum():
    print("Invalid input. Please enter alphanumeric characters only.")
else:
    output = hashlib.md5(s.encode()).hexdigest()
    if output:
        print(f"Output: {output}")