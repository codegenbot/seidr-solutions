````
def longest_substring(s: str) -> int:
    """Given a string, find the length of its longest substring with no repeating characters."""
    if not s:
        return 0
    max_len = 0
    start = 0
    char_index_map = {}
    
    for end in range(len(s)):
        if s[end] in char_index_map:
            start = max(start, char_index_map[s[end]] + 1)
        char_index_map[s[end]] = end
        max_len = max(max_len, end - start + 1)
    
    return max_len