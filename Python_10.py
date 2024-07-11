def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = list(string)
    right = list(string)[::-1]

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            if i + 1 >= len(left) or right[j + 1] != left[-(i + 1)]:
                right.insert(0, left[0])
                del left[0]
            else:
                left.append(right[j])
                j -= 1
        else:
            i += 1
            j -= 1

    return "".join(left + list(string))