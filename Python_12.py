def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    longest_str = strings[0]
    longest_len = len(strings[0])
    
    for string in strings[1:]:
        if len(string) > longest_len:
            longest_str = string
            longest_len = len(string)
    
    return longest_str