def find_longest_string():
    strings = input('Enter a string of space-separated words: ').split()
    return max(strings, key=len)

print(find_longest_string())