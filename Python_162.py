```
import hashlib

while True:
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input()
    if s.isalnum():  
        break
    else:
        print("Please enter some alphanumeric characters.")

if not s:
    print("Please enter some alphanumeric characters.")
else:
    output = hashlib.md5(s.encode()).hexdigest()
    print(f"Output: {output}")