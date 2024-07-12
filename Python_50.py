def decode_shift(s: str):
    key = int(input("Enter a number to shift (5 or more): "))
    if key < 5:
        print("Invalid input! Please enter a number 5 or above.")
    else:
        decoded = ""
        for ch in s:
            if "a" <= ch <= "z":
                decoded += chr((ord(ch) - key - ord("a")) % 26 + ord("a"))
            elif "A" <= ch <= "Z":
                decoded += chr((ord(ch) - key - ord("A")) % 26 + ord("A"))
            else:
                decoded += ch
        return decoded


print(decode_shift(input("Enter a string to decode: ")))