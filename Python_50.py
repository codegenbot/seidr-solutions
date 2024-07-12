```
while True:
    try:
        shift = int(input("Enter the shift value: "))
        encoded_str = input("Enter the encoded string: ")
        if not 0 <= shift <= 25:
            raise ValueError("Invalid shift value. Please enter a value between 0 and 25.")
        result = ""
        for ch in encoded_str:
            try:
                if ch.isalpha():
                    if "A" <= ch <= "Z":
                        result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
                    elif "a" <= ch <= "z":
                        result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
                elif ch.isspace():
                    result += ch
                else:
                    result += ch
            except AttributeError:
                print(
                    "Invalid character. Please enter only alphanumeric characters or spaces."
                )
        break
    except ValueError as e:
        print(e)
print(result)