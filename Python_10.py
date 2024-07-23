def make_palindrome(s: str) -> str:
    if len(s) % 2 == 0:
        middle_index = len(s) // 2
        return (
            s[:middle_index].lower() + s[middle_index].upper() + s[:middle_index][::-1]
        )
    else:
        middle_index = len(s) // 2
        return (
            s[:middle_index].lower()
            + s[middle_index].upper()
            + s[::-1]
            + s[middle_index].upper()
        )