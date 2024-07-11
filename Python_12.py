def longest(strings):
    return max(strings, key=len)

if __name__ == '__main__':
    strings = input().split()
    result = longest(strings)
    print(result)