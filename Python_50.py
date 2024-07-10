'''

while True:
    s = input("Enter a string to shift (or 'q' to quit): ")
    if s.lower() == 'q':
        break
    try:
        n = int(input("Enter the number of positions to shift: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
        else:
            result += char
    print(result)

'''