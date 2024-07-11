def find_smallest_substring(s: str) -> str:
    if not s:
        return ""

    char_count = {}
    for char in s:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    min_length = float("inf")
    result = ""
    left = 0

    for right, char in enumerate(s):
        while all(count > 0 for count in char_count.values()):
            if right - left + 1 < min_length:
                min_length = right - left + 1
                result = s[left : right + 1]
            char_count[s[left]] -= 1
            left += 1

    return result