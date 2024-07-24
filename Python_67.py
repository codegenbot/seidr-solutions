while True:
    s = input()
    n = int(input())
    pattern = r"(\d+)\s*(apples|oranges)"

    if not re.search(pattern, s.lower()):
        continue

    break