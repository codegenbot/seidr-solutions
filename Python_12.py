def find_longest_string():
    strings = input("Enter space-separated strings: ").split()
    return max(strings, key=len)

print(find_longest_string())