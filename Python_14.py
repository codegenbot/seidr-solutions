```
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        temp_result = [p + char for p in result] 
        if p+char != char+p:
            temp_result.extend([char + p for p in result])
        result.extend(temp_result)
    return result

print(all_prefixes("abc"))