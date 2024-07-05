def search(lst):
    from collections import Counter
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    try:
        line = input().strip()
        if line:
            lst = list(map(int, line.split()))
            print(search(lst))
        else:
            print(-1)
    except (ValueError, TypeError):
        print(-1)