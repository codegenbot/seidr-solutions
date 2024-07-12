try:
    shift = int(input("Enter the shift value: "))
except ValueError as e:
    print("Invalid input. Please enter a valid shift value.")
else:
    encoded_str = input("Enter the encoded string: ")
    result = ""
    for ch in encoded_str:
        if ch.isalnum():
            if "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            elif "a" <= ch <= "z":
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
        else:
            result += ch