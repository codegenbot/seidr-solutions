```Python
def decode_shift():
    """
    Docstring explaining your code
    """
    s = input("Please enter a string: ")
    shift = int(input("Enter the shift value (0-25): "))
    decoded = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded

decode_shift()