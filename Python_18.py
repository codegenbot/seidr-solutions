def how_many_times(string: str, substring: str) -> int:
    count = 0
    start = 0
    while start < len(string):
        start = string.find(substring, start)
        if start == -1:
            break
        count += 1
        start += 1
    return count