return (
    "#"
    + "".join(
        char for char in cleaned_string + cleaned_string[::-1] if char.isalnum()
    ).lower()
    + "#"
)