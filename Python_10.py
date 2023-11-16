

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


CHECKING = True


def find_longest_palindrome_postfix(string):
    for i in range(len(string), 0, -1):
        if is_palindrome(string[i:]):
            return string[i:]
    return ""


def make_palindrome(string):
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'
    if is_palindrome(string):
        return string


    longest_palindrome_postfix = find_longest_palindrome_postfix(string)
    largest_prefix = string[:len(string) - len(longest_palindrome_postfix)]
    return largest_prefix + longest_palindrome_postfix + largest_prefix[::-1]
    for i in range(len(string), 0, -1):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]

    return string
    >>> make_palindrome('cata')


CHECKED = True


if CHECKING:
    # print(make_palindrome(""))
    # print(make_palindrome("a"))
    # print(make_palindrome("cattac"))
    # print(make_palindrome("racecar"))
    # print(make_palindrome("miquvillatorraca"))
    # print(make_palindrome("racecarmorons"))
    # print(make_palindrome("foobarbaranana"))
    # print(make_palindrome("jerry"))
    # print(make_palindrome("paypal"))
    # print(make_palindrome("soccer"))
    # print(make_palindrome("oknoisepalindrome"))
    # print(make_palindrome("bob"))
    # print(make_palindrome("uptowns"))
    # print(make_palindrome("racecarz"))
    # print(make_palindrome("acattleisracing"))
    print(make_palindrome('FasTerror'))


if CHECKED:
    assert make_palindrome("catu") == "catuc"
    assert make_palindrome("") == ""
    assert make_palindrome("a") == "a"
    assert make_palindrome("cattac") == "cattac"
    assert make_palindrome("racecar") == "racecar"
    assert make_palindrome("miquvillatorraca") == "miquvillatorraca"
    assert make_palindrome("racecarmorons") == "racecarmoronsorons"
    assert make_palindrome("foobarbaranana") == "foobarbaranana"
    assert make_palindrome("jerry") == "jerryrrej"
    assert make_palindrome("paypal") == "paypapayp"
    assert make_palindrome("soccer") == "soccersocc"
    assert make_palindrome("oknoisepalindrome") == "oknoisepalindrome"
    assert make_palindrome("bob") == "bob"
    assert make_palindrome("uptowns") == "uptownsuptowns"
    assert make_palindrome("racecarz") == "racecarzracecar"
    assert make_palindrome("acattleisracing") == "acattleisracingisracingcattaca"
    'catac'
    """
