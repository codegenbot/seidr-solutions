```
def fruit_distribution(s):
    if not isinstance(s, str) or len(s.strip()) == 0:
        return "unknown"
    s = s.lower()
    if "and" in s: 
        if "not" in s and "bad" not in s and "rotten" not in s:
            return "apples"
        elif "bad" in s or "rotten" in s:
            return "none"
    else: 
        pattern = re.compile(r"((?:(?:and|,|, )?1(,(?!1))*|(?:and|,|, )?0(,(?!0))*)*((?:(?:and|,|, )?1(,(?!1))*|(?:and|,|, )?0(,(?!0))*)*))")
        match = pattern.match(s)
        if match:
            return "mixed"
    return "unknown"