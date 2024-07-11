import hashlib


def string_to_md5():
    while True:
        text = input("Enter the text (or 'quit' to exit): ")
        if text.lower() == "quit":
            return None
        if not text:
            print("Please enter some text.")
        else:
            result = ""
            for line in text.split("\n"):
                if line:
                    result += hashlib.md5(line.encode()).hexdigest() + "\n"
            return result.strip()