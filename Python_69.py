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
    input = sys.stdin.read
    data = input().strip().split()
    lst = list(map(int, data))
    print(search(lst) if lst else -1)