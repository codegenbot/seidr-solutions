import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

for _ in range(3):  # Try 3 times to get valid input
    try:
        text = input("Enter a string: ")
        if text.strip():
            print(string_to_md5(text))
            break
        else:
            print("Please provide a non-empty string.")
    except Exception as e:
        print("Error occurred while processing input. Try again.")