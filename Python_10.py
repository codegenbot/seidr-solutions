```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = list(string)
    right = list(string)[::-1]

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            if j > 0:
                if left[0] == right[j-1]:
                    left.insert(0, right[j])
                    break
                else:
                    left.insert(0, right[j-1])
                    j -= 1
            else:
                if len(left) >= 2 and left[0] != right[0]:
                    left.insert(0, right[0])
                else:
                    left.insert(0, 'a')
        else:
            i += 1
            j -= 1

    return "".join(left + list(string))