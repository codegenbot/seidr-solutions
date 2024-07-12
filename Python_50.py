def decode_shift():
    while True:
        s = input("Enter an encoded string: ")
        try:
            shift = int(input("Enter the shift value: "))
        except ValueError:
            print("Invalid input. Please enter a valid integer for the shift value.")
            continue
        if 1 <= abs(shift) <= 25 and len(s) > 0:
            break
        else:
            print("Invalid input. Please try again.")

    result = ""
    for ch in s:
        if ch.isalpha():
            char_code = ord(ch.lower())
            result += chr((char_code - ord('a') - shift) % 26 + ord('a')) if 'a' <= ch <= 'z' else \
                       chr((ord(ch.upper()) - ord('A') - shift) % 26 + ord('A'))
        else:
            result += ch
    return result

print(decode_shift())