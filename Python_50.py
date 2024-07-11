def decode_shift():
    while True:
        s = input("Enter the encoded string: ")
        if s.startswith("25-") or s.startswith("26-"):
            break
        else:
            print("Invalid input. Please enter a string that starts with '25-' or '26-'.")

    if s.startswith("25-"):
        shift = int(s[3:])
        s = s[4:]
    elif s.startswith("26-"):
        shift = int(s[3:])
        s = s[4:]

    result = ""
    for ch in s:
        if "a" <= ch <= "z":
            result += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
        elif "A" <= ch <= "Z":
            result += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        else:
            result += ch

    print("Decoded string: ", result)