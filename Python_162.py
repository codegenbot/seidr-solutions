```
text = input("Enter a string: ")
if not text:
    print("Error: Please enter a valid string.")
else:
    print(hashlib.md5(text.encode()).hexdigest())