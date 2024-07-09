def find_longest_string():
    strings = input().splitlines()
    return max(strings, key=len)

print(find_longest_string())