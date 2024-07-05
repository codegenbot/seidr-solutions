def search(lst):
    from collections import Counter
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    lst = list(map(int, input().strip().split()))
    print(search(lst) if lst else -1)