def longest_common_prefix(strs):
    if not strs:
        return ""
    prefix = strs[0]
    for s in strs:
        while not s.startswith(prefix):
            prefix = prefix[:len(common_prefix) - 1]
    return prefix