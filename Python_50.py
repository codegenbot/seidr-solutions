```
def decode_shift():
    t = input("Enter a type of shift (25- or 26- ): ")
    s = input("Enter a shifted string (" + t + " ): ")
    if t.startswith("25-"):
        shift = int(t[3:])
        s = s[4:]
    elif t.startswith("26-"):
        shift = int(t[3:])
        s = s[4:]
    else:
        while True:
            try:
                shift = int(input("Enter the shift value (1-25): "))
                if 0 < shift <= 25:
                    break
                print("Invalid input. Please enter a number between 1 and 25.")
            except ValueError:
                print("Invalid input. Please enter a number.")
    result = ""
    for ch in s:
        if "a" <= ch <= "z":
            result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
        elif "A" <= ch <= "Z":
            result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
        else:
            result += ch
    return result


print(decode_shift())