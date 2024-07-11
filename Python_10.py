def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = list(string)
    right = list(string)[::-1]

    i, j = 0, len(right) - 1
    mismatched_chars = []

    while i < len(left):
        if left[i] != right[j]:
            mismatched_chars.append(right[j])
            j -= 1
        else:
            i += 1
            j -= 1

    for char in mismatched_chars:
        left.insert(0, char)

    return "".join(left + list(string))