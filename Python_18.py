def how_many_times(string: str, substring: str) -> int:
    count = start = 0
    while True:
        start = string.find(substring, start)
        if start == -1:
            return count
        count += 1
        start += 1