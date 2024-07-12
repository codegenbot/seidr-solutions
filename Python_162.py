```
import hashlib

print("Please enter some text (alphanumeric characters only), type 'quit' to exit: ", end="")
while True:
    try:
        s = input()
        if s.lower() == 'quit':
            print("Exiting...")
            break
        elif not s.isalnum():
            print("Invalid input. Please enter alphanumeric characters only.")
        else:
            output = hashlib.md5(s.encode()).hexdigest()
            if output:
                print(f"Output: {output}")
    except Exception as e:
        print(f"An error occurred: {str(e)}")