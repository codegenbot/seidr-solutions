def make_palindrome(s: str) -> str:
    if len(s) % 2 == 0:
        middle_index = len(s) // 2
        return (
            s[:middle_index].lower() + s[middle_index].lower() + s[:middle_index][::-1]
        )
    else:
        middle_index = len(s) // 2
        return (
            s[0].lower()
            + s[1 : middle_index + 1].lower()
            + s[middle_index].lower()
            + s[middle_index::-1].lower()
            + s[0].upper()
        )