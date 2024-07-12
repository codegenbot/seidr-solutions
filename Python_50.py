def decode_shift():
    while True:
        try:
            shift = int(input("Enter the shift value: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer for the shift value.")
    
    while True:
        s = input("Enter an encoded string: ")
        if len(s) > 0 and isinstance(shift, int):
            break
        else:
            print("Invalid input. Please try again.")

    result = ""
    for ch in s:
        if ch.isalpha():
            char_code = ord(ch.lower())
            result += (
                chr((char_code - ord("a") - shift) % 26 + ord("a"))
                if "a" <= ch <= "z"
                else chr((ord(ch.upper()) - ord("A") - shift) % 26 + ord("A"))
            )
        else:
            result += ch
    return result

print(decode_shift())