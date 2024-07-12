```
try:
    shift = int(input("Enter the shift value: "))
except ValueError:
    print("did not receive expected input")
else:
    encoded_str = input("Enter the encoded string: ")
    result = ""
    try:
        for ch in encoded_str:
            if ch.isalnum():
                if "A" <= ch <= "Z":
                    result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
                elif "a" <= ch <= "z":
                    result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
            else:
                result += ch
    except ValueError:
        print("Invalid input. Please enter only alphanumeric characters and special characters.")