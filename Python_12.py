def longest(strings):
    return max(strings, key=lambda x: (-len(x), x))

num_strings = int(input("Enter the number of strings: "))
strings = [input().strip() for _ in range(num_strings)]
print(longest(strings))