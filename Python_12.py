def find_longest_string():
    strings = input().split()
    return max(strings, key=len)

print(find_longest_string())