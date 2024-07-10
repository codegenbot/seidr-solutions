def fruit_distribution(s, n):
    """
    Given a string of words where the first word is 'apples', the second word represents the number of apples,
    and the third word is either 'oranges' or 'and'. If the third word is 'oranges', then it's followed by a number.
    Return the number of people that can be formed with the given fruits, where each person needs one apple and one orange.
    """
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    apples = int(s[s.index("apples") + 1 :].replace("and", "").replace("apples", ""))
    oranges = int(s[s.index("oranges") + 7 :].replace("and", "").replace("oranges", ""))
    return n - apples - oranges