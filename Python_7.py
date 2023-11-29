def filter_by_substring(strings, substring):
    return [
        s for s in strings if substring in s
    ]  # implementation for the provided function signature


strings = input().split()  # read input strings as list
substring = input().strip()  # read input substring
result = filter_by_substring(strings, substring)  # filter strings based on substring
print(result)  # print the filtered result