def find_longest_string():
    strings = input("Enter a space-separated list of strings: ").strip().split()
    return max(strings, key=len)

print(find_longest_string())