def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = "".join(
        char
        for char in cleaned_string[: (len(cleaned_string) + 1) // 2]
        if char.isalnum()
    )
    return (
        "#{}#".format("".join(char for char in half + half[::-1]).lower())
        .center(len(cleaned_string) * 4, "#")[2:-2]
        .upper()
    )