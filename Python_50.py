shift = 0
while True:
    try:
        shift = int(input("Enter the shift value: "))
        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")

encoded_str = ""
while True:
    try:
        encoded_str = input("Enter the encoded string: ")
        break
    except ValueError:
        print("Invalid input. Please enter a valid string.")

result = ""
for ch in encoded_str:
    if ch.isalpha():
        if "A" <= ch <= "Z":
            result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
        else:
            result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
    else:
        result += ch