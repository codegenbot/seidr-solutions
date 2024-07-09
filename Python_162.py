```
def calculate_md5_and_length(text):
    if not text:
        return None
    md5_hash = hashlib.md5(text.encode()).hexdigest()
    length = len(text)
    return md5_hash, length

if __name__ == "__main__":
    while True:
        user_input = input("Enter a string (or 'q' to quit): ")
        if user_input.lower() == "q":
            break
        try:
            result = calculate_md5_and_length(user_input)
            if not result[0]:
                print("Program did not receive expected input")
            else:
                print(f"MD5 of '{user_input}': {result[0]}  Length: {result[1]}")
        except Exception as e:
            print(f"Error: {e}")