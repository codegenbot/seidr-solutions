shift = int(input("Enter the shift value: "))
encoded_str = input("Enter the encoded string: ")
result = ""
try:
    if not 0 <= shift <= 25:
        raise ValueError("Invalid shift value. Please enter a value between 0 and 25.")
    for ch in encoded_str:
        if ch.isalnum():
            if "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            elif "a" <= ch <= "z":
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
        else:
            result += ch
except ValueError as e:
    print(e)