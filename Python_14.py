Here is the completed code:

def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string)+1)]