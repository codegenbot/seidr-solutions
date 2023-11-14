

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    result = 0
    if len(substring) <= len(string) and not (len(substring) == 0 or len(string) == 0):
        pos_response = []
        pos_response.append([i for i in range(len(substring) - 1, len(string)) if string[i - len(substring) + 1:i + 1] == substring])
        result = len(pos_response[0])
        #print("pos_response: " + str(pos_response))
        #print("len(pos_response[0]): " + str(len(pos_response[0])))

    return(result)

how_many_times("aaaaaaaaaaaaaaaaaaaaaaaaa", "b")
    """
