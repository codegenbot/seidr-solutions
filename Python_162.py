while True:
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input().strip()
    
    if not s: 
        continue
    
    if not s.isalnum():
        print("Invalid input. Please enter alphanumeric characters.")
    else:  
        break
else:
    output = hashlib.md5(s.encode()).hexdigest()
    print(f"Output: {output}")