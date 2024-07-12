import hashlib

def process_input():
    print("Please enter some text (alphanumeric characters only): ", end="")
    s = input()
    if not s:
        print("Please enter some alphanumeric characters.")
    else:
        output = hashlib.md5(s.encode()).hexdigest()
        if output:
            print(f"Output: {output}")

process_input()