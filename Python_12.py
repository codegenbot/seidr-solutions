def find_longest_string():
    strings = raw_input("Enter a space-separated list of strings: ").split()
    return max(strings, key=len)


print(find_longest_string())