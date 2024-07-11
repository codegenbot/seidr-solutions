def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    left = 0
    right = len(string) - 1
    while left < right:
        if string[left] != string[right]:
            break
        left += 1
        right -= 1

    for i in range(len(string), left, -1):
        if string[:i][::-1] + string[i:] == string[::-1]:
            return string[:i][::-1] + string[i:][::-1]