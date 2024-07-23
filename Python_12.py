from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    sorted_strings = sorted(strings)
    max_len = 0
    result_str = ''
    
    for s in sorted_strings:
        if len(s) > max_len:
            max_len = len(s)
            result_str = s
    
    return "".join(sorted(result_str))