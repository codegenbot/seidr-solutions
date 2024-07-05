def search(lst):
    from collections import Counter
    count = Counter(lst)
    result = -1
    for num, freq in count.items():
        if freq >= num and num > result:
            result = num
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    lst = list(map(int, input.split()))
    print(search(lst))