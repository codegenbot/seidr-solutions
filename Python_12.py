def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    else:
        max_len = len(strings[0])
        longest_string = strings[0]
        for string in strings:
            if len(string) > max_len:
                max_len = len(string)
                longest_string = string
        return longest_string