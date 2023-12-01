from typing import List

def count_chars(string: str) -> List[int]:
    char_count = [0] * 26
    
    for char in string:
        if char.isalpha():
            char_count[ord(char.lower()) - ord('a')] += 1
    
    return char_count