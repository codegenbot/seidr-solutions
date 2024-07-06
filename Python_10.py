def make_palindrome(s: str) -> str:
    s = input("Enter a string to make palindrome: ")
    if s == s[::-1]:
        return s

    for char in "abcdefghijklmnopqrstuvwxyz":
        right_to_left = list(s)
        i, j = 0, len(s) - 1
        while i <= j:
            right_to_left[j] = ''
            j -= 1
        right_to_left.append(char)

        new_string = ''.join(reversed(right_to_left))
        if new_string + s == (new_string + s)[::-1]:
            return new_string + s

    return "No palindrome possible"