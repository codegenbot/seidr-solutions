```
def decode_shift():
    while True:
        cont = input("Do you want to decode a string? (yes/no): ")
        if cont.lower() == "yes":
            break
        elif cont.lower() == "no":
            return
        else:
            print("Invalid input. Please enter 'yes' or 'no'.") 

    while True:
        encoding_type = input("Enter the type of encoding ('25-' for Caesar Cipher, '26-' for Vigenere Cipher): ")
        if encoding_type == "25-":
            s = input("Enter the encoded string: ")
            shift = int(s[3:])
            s = s[4:]
        elif encoding_type == "26-":
            while True:
                try:
                    shift = int(input(f"Enter the shift value: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
            s = input("Enter the encoded string: ")
        else:
            print("Invalid input. Please enter '25-' or '26-'.")
            return

        result = ""
        for ch in s:
            if "a" <= ch <= "z":
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
            elif "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            else:
                result += ch

        print(f"Decoded string: {result}")

        while True:
            cont = input("Do you want to decode another string? (yes/no): ")
            if cont.lower() == "yes":
                break
            elif cont.lower() == "no":
                return
            else:
                print("Invalid input. Please enter 'yes' or 'no'.")