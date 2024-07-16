n = int(input("Enter the number of strings: "))
strings = [input(f"Enter string {i+1}: ") for i in range(n)]

def longest(strings):
    return max(strings, key=len)

print(longest(strings))