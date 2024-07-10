def reverse_string(string, i):
    return string + string[:i][::-1] if i > 0 else string


def make_palindrome(s):
    if s == s[::-1]:
        return s
    for i in range(len(s)):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s


if __name__ == "__main__":
    input_string = input().strip()
    result = make_palindrome(input_string)
    print(result)