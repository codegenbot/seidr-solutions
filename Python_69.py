def search(lst):
    from collections import Counter
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    if not input:
        print(-1)
    else:
        try:
            lst = list(map(int, input.split()))
            print(search(lst))
        except ValueError:
            print(-1)