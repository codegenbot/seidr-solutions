def longest(strings: list) -> Optional[str]:
    if len(strings) == 0:
        return None
    else:
        max_len = -1
        longest_string = None
        for string in strings:
            if len(string) > max_len:
                max_len = len(string)
                longest_string = string
        return longest_string