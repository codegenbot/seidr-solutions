try:
    strings = [input().strip() for _ in range(int(input()))]
    print(longest(strings))
except Exception as e:
    print("Error: Input not in expected format.")