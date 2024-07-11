import hashlib

def main():
    while True:
        text = input("Enter the text (or 'quit' to exit): ")
        if text.lower() == 'quit':
            return None
        if not text:
            print("Please enter some text.")
        else:
            result = hashlib.md5(text.encode()).hexdigest()
            print(result)

if __name__ == "__main__":
    main()