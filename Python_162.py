while True:
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input().strip()
    
    if not s: 
        continue
    
    if s.isalnum():  
        break
    else:
        print("Please enter some alphanumeric characters.")

output = hashlib.md5(s.encode()).hexdigest()
print(f"Output: {output}")