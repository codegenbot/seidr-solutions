encoded_message += chr(
    (ord(char) - ord("A") + 2) % 26 + ord("A") if "A" <= char <= "Z" else ord(char)
)