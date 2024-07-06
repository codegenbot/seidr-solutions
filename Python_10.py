```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    for char in "abcdefghijklmnopqrstuvwxyz":
        left_to_right = ""
        right_to_left = list(s)
        i, j = 0, len(s) - 1
        while i <= j:
            left_to_right += s[i]
            right_to_left[j] = ''
            i += 1
            j -= 1
        right_to_left.append(char)
        for k in range(len(left_to_right)):
            if right_to_left[k] == '':
                left_to_right = left_to_right[:k] + char + left_to_right[k:]
                break

        new_string = left_to_right + "".join(reversed(right_to_left))
        if new_string == new_string[::-1]:
            return new_string