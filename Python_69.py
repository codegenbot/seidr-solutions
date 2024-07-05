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
        input_data = input().strip()
        if not input_data:
            print(-1)
        else:
            lst = list(map(int, input_data.split()))
            if all(0 <= x <= 100 for x in lst):
                print(search(lst) if lst else -1)
            else:
                print(-1)
    except Exception:
        print(-1)