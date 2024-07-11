```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    left = right = 0
    while right < len(string):
        if string[left : right + 1] == string[left : right + 1][::-1]:
            if left == 0 and right == len(string) - 1:
                return string
            return string[:left][::-1] + string[left : right + 1][::-1]
        if right == len(string) - 1:
            right = 0
            left += 1
        else:
            right += 1
    if not string or len(string) % 2 == 0:
        return (string[0] + "a") * (len(string) // 2)
    return (string[0] + "a" + string[0]) * (len(string) // 2 + 1)