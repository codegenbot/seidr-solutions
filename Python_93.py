def encode(message):
    special_characters = set("1234567890!@#$%^&*()_-+=}{[]|\:;\"'?/><,.`~")
    vowels = "aeiouAEIOU"
    
    if any(char in special_characters for char in message):
        return "Invalid input. Please enter a message containing only alphabets or special characters."
    
    return "".join(
        (
            chr(ord(char) + 1)
            if char.isalpha() and char.upper() in vowels
            else char.swapcase()
            if char.isalpha() or not char.isspace()
            else char  # Return all characters unchanged
        )
        for char in message
    )

print(encode(input("Enter a message: ").strip()))