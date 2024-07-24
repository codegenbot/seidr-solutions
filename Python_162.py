```
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        try:
            user_input = input("Enter a string: ").lower()
            if len(user_input) > 0:
                if "md5" in user_input or "hash" in user_input:
                    return
                print(string_to_md5(user_input))
            else:
                print("Please enter a non-empty string.")
        except KeyboardInterrupt:
            print("\nGoodbye!")
            break