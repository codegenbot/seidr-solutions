def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = list(string)
    right = ""

    for char in reversed(string):
        right += char

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            left.insert(0, right[j])
            j -= 1
        else:
            i += 1
            j -= 1

    return "".join(left)