''' 
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for i in range(1, len(string)+1):
        temp_result = [p + c for p in result for c in string[:i]]
        result.extend(temp_result)
    return result  

print(all_prefixes("abc")) 
'''