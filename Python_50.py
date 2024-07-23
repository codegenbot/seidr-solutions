def decode_shift(s: str):
    while True:
        try:
            shift = int(input("Enter the shift value (1-25): "))
            if 1 <= shift <= 25:
                break
            else:
                print("Invalid input! Please enter a number between 1 and 25.")
        except ValueError:
            print("Invalid input! Please enter an integer.")

    result = ""
    for ch in s.lower():
        if ch.isalpha():
            ascii_offset = ord('a') if 'a' <= ch <= 'z' else ord('A')
            result += chr(((ord(ch) - ascii_offset + shift) % 26) + ascii_offset)
        else:
            result += ch

    return result