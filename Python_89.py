def encrypt(s):
    result = ""
    while True:
        try:
            shift = int(input("Enter shift value: "))
            if 0 <= shift <= 25:
                break
            else:
                print("Invalid input. Please enter a number between 0 and 25.")
        except ValueError:
            print("Invalid input. Please enter an integer.")
    for char in s:
        if char.isalpha():
            if char.isupper():
                offset = ord('A')
            else:
                offset = ord('a')
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result