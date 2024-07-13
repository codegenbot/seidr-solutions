def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = "".join(
        char for char in cleaned_string[: len(cleaned_string) // 2] if char.isalnum()
    )
    return (
        "#{}#".format(
            "".join(char for char in half + half[::-1]).lower()
            + "".join(char for char in half + half[::-1])[::-1]
        )
        .center(len(cleaned_string) * 4, "#")[2:-2]
        .upper()
    )