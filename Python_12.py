def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    else:
        max_length = -1
        max_string = ""
        for string in strings:
            if len(string) > max_length:
                max_length = len(string)
                max_string = string
        return max_string