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
        lst = list(map(int, input("Enter numbers separated by space: ").strip().split()))
        print(search(lst) if lst else -1)
    except ValueError:
        print(-1)