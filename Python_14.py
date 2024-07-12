```
def all_prefixes(string: str) -> List[str]:
    if not string:
        return []
    
    result = [""]
    for char in string:
        new_result = [p + char for p in result]
        result.extend([p + char for p in result])
        result = new_result
    return result