shift = -1
while shift < 0 or shift > 25:
    shift = int(input("Enter the shift value (0-25): "))
encoded_str = input("Enter the encoded string: ")
result = ""
for ch in encoded_str:
    if ch.isalpha():
        if "A" <= ch <= "Z":
            result += chr((ord(ch) - ord("A") - shift) % 26 + ord("A"))
        else:
            result += chr((ord(ch) - ord("a") - shift) % 26 + ord("a"))
    else:
        result += ch