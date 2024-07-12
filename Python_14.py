from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        temp_result = [p + char for p in result] + [str(char) + p for p in result]
        result.clear()
        result.extend([""])
        result.extend(temp_result)
    return result

print(all_prefixes("abc"))