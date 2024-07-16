def encode(message):
    try:
        return "".join(
            chr(ord(char) + 1) if char.isalpha() and char not in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
            else char.swapcase() if char.isalpha() or char.isdigit() else char
            for char in message
        )
    except Exception as e:
        return "Invalid input. Please enter a message containing only alphabets or special characters."

print(encode(input("Enter a message (alphabets, digits or special characters only): ")))