try:
    n = int(input())
    strings = [input() for _ in range(n)]

    def longest(strings):
        return max(strings, key=len)

    print(longest(strings))
except ValueError:
    print("Please enter a valid integer for the number of strings.")