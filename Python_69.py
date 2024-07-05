def search(lst):
    from collections import Counter
    if not lst:
        return -1
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    try:
        input_line = input().strip()
        if not input_line:
            print(-1)
        else:
            lst = list(map(int, input_line.split()))
            print(search(lst))
    except ValueError:
        print(-1)