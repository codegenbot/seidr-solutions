from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    
    strings.sort(key=len)  
    max_len = len(strings[0])
    results = [strings[0]]  

    for s in strings[1:]:
        if len(s) == max_len:
            results.append(s)
        else:
            break

    return results