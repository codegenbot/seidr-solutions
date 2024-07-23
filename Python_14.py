def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string)+1):
        prefix = string[:i].lower()
        if any(c.isupper() for c in prefix):
            upper = "".join(e for e in prefix if e.isupper())
            lower = "".join(e for e in prefix if e.islower())
            result.append(upper + lower)
        else:
            result.append(prefix)
    return ["" ] + result