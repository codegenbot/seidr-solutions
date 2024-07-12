```python
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        temp_result = [str + char for str in result]
        temp_result.extend(result)
        result = sorted(list(set(temp_result)))
    return result