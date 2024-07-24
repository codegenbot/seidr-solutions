```Python
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    while True:
        try:
            text = input("Enter a string: ").lower().strip()  
            if len(text) > 0:
                result = string_to_md5(text)
                print(result)
            else:
                print("Please enter a non-empty string.")
        except KeyboardInterrupt:
            print("\nGoodbye!")
            break