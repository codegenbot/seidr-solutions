def longest(strings: list[str]) -> str:
    max_len = 0
    longest_str = ""
    
    for s in strings:
        if len(s) > max_len and s != "stop":
            max_len = len(s)
            longest_str = s
            
    return longest_str if longest_str else "No strings entered"