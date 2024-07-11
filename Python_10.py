```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = list(string)
    right = "".join(list(reversed(string)))

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            if j > 0:
                left.insert(0, right[j-1])
                j -= 1
            else:
                left.insert(0, right[0])
        else:
            i += 1
            j -= 1

    return "".join(left) + right