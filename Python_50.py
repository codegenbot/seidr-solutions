shift = int(input("Enter the shift value: "))
encoded_str = input("Enter the encoded string: ")
result = ""
try:
    for ch in encoded_str:
        if ch.isalpha():
            if "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            else:
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
        else:
            raise ValueError("Invalid input. Please enter only alphabetic characters.")
except ValueError as e:
    print(e)