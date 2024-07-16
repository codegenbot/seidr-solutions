def longest(strings):
    return max(strings, key=len)

while True:
    try:
        line = input()
        if not line:
            break
        print(longest(line.split()))
    except EOFError:
        break